#include <stdio.h>
#include <stdlib.h>

#define clrscr() system("cls")

struct process
{
	int pid, bt, wt, tt;
}p[10];

int main(void)
{
	int i, j,  n, totwt, tottt, a1, a2, t1, t2;
	clrscr();
	printf("\nEnter the number of processes:");
	scanf("%d", &n);
	printf("\nEnter the burst times:\n");
	for(i=1; i<=n; i++)
	{
		p[i].pid = i;
		printf("\nEnter the burst time for process %d:", i);
		scanf("%d", &p[i].bt);
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(p[i].bt > p[j].bt)
			{
				t1 = p[i].bt;
				t2 = p[i].pid;
				p[i].bt = p[j].bt;
				p[i].pid = p[j].pid;
				p[j].bt = t1;
				p[j].pid = t2;
			}
		}
	}
	
	p[1].wt = 0;
	p[1].tt = p[1].bt + p[1].wt;
	i=2;
	while(i<=n)
	{
		p[i].wt = p[i-1].bt + p[i-1].wt;
		p[i].tt = p[i].bt + p[i].wt;
		i++;
	}
	i=1;
	totwt = tottt = 0;
	printf("\nProcess ID\tBurst Time\tWaiting Time\tTurnaround Time");
	while(i<=n)
	{
		printf("\n\t%d\t\t%d\t\t%d\t\t%d", p[i].pid, p[i].bt, p[i].wt, p[i].tt);
		totwt += p[i].wt;
		tottt += p[i].tt;
		i++;
	}
	a1 = totwt / n;
	a2 = tottt / n;
	printf("\nTotal waiting time = %d", totwt);
	printf("\nTotal turnaround time = %d", tottt);
	printf("\nAverage waiting time = %d", a1);
	printf("\nAverage turnaround time = %d", a2);
	return 0;
}

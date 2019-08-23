#include<stdio.h>

float result(float a[], float b[], int n)
{
	int i;
	float ans = 0.0;
	for(i=0; i<n; i++)
	{
		ans = ans + (a[i] / b[i]);
	}
	return ans;
	
}

int main(void)
{
	float mrr[20], time[20];
	int hrs, mins, secs, i, n, total_mins;
	float result;
	printf("Enter the number of values: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the value number %d: ", i+1);
		scanf("%f", &mrr[i]);
		printf("Enter the time in hours:minutes:seconds (hh:mm:ss) : " );
		scanf("%2d %2d %2d", &hrs, &mins, &secs);
		printf("\n");
		total_mins = mins + (secs/60)+ (hrs*60);
		time[i] = total_mins;
	}
	result = formula(mrr, time, n);
	printf("\nThe value of MRR/Time is = %f", result);
	return 0;
}

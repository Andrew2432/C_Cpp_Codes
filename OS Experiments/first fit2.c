#include<stdio.h>

int main(void)
{
	int process_size[10], block_size[10], allocated[10];
	int x, y, i, j, k=0;
	
	printf("\nEnter the number of blocks: ")
	scanf("%d", &x);
	printf("\nEnter the block size:\n");
	while(i++ < x)
		scanf("%d", &block_size[i]);
	printf("\nEnter the number of processes: ");
	scanf("%d", &y);
	printf("\nEnter the process size:\n");
	i=0;
	while(i++ < y)
		scanf("%d", &process_size[i]);
	i=0;
	while(i < x)
	{
		while(j < y)
		{
			if(block_size[j] >= process_size[i])
			{
				printf("\n%d \t%d \t%d", i+1, process_size[i], j+1);
				allocated[k++] = i;
				block_size[j] -= process_size[i];
			}
		}
	}
		
}

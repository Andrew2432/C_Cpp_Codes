#include<stdio.h>

int main(void)
{
	int i=0, j=0, n, flag=0;
	printf("\nEnter the number of blocks: ");
	scanf("%d", &n);
	
	int *block_size = malloc(n * sizeof(int));
	
	printf("\nEnter the block numbers: ");
	
	while(i++ < n)
		scanf("%d", &block_size[i]);
	
	i = 0;
	int *process_size = malloc(sizeof(int));
	
	printf("\nEnter the list of processes. Enter -1 to stop\n-> ");
	
	do 
	{
    	if (scanf(" %d", &process_size[i]) != 1)
		{
        	printf("Error! Incorrect input value.");
        	flag = 0;
        	break;
    	}

    	process_size = realloc(process_size, size * (sizeof *(process_size))); 
    	if (process_size == NULL) 
		{
	        flag = 0;
	        break;
    	}
	} while (process_size[i++] != -1 && !flag);
	
	if(!flag)
	{
		printf("\nError. Try again.");
		return 1;
	}
	
	i = 0;
	
	printf("\nThe First Fit Memory Allocation Is As Follows:");
	printf("\nProcess no.\tProcess size \tBlock no.")
	while(i++ < sizeof(process_size))
	{
		while(j++ < sizeof(block_size))
		{
			if(block_size[j] > process_size[i])
			{
				printf("\n%d \t%d \t%d", i+1, process_size[i], j+1);
				block_size[j] -= process_size[i];
			} 
			
			
		}
		
	}
	
	
	
}

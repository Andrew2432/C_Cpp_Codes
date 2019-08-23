#include <stdio.h>

int main(void)
{
	int i=0, j=0;
	
	l1:while(i<2)
	{
		i++;
		while(j<3)
		{
			printf("loop\n");
			goto l1;
		}
	}
	return 0;
}

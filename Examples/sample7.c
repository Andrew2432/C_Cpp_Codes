#include <stdio.h>

void main()
{
	int i=1, k;
	if(i==1)
	{
		goto label;
		for(k = 0; k<3; k++)
		{
			printf("hi\n");
			label: k = printf("%03d", i);
		}
	}
}

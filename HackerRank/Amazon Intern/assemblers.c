#include<stdio.h>

int countSetBits(unsigned int x)
{
	unsigned int c=0;
	while(x)
	{
		c += x&1;    
		c>>1;
	}
	return c;
}
int main() {
    int n, i=0, a, b, y=0, sb=0;
    unsigned int x=0;
    scanf("%d", &n);
    while(i<n)
    {
        scanf("%d %d", &a, &b);
        for(x=a; x<=b; x++)
        {
            if(x%2==0)
            {
 				sb = countSetBits(x);
 				if(sb%2 == 0)
 					printf("%d", sb);
            }
            sb = 0;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int eulergcd(int, int);

int eulergcd(int m, int n)
{
	if(n == 0) 
		return m;
	else
		eulergcd(n, m%n);
}

int main(void)
{
	int m, n;
	system("cls");
	printf("Enter two numbers:");
	scanf("%d %d", &m, &n);
	
	if(eulergcd(m,n))
		printf("\nThe gcd of %d and %d is %d.", m, n, eulergcd(m,n));
	else
		printf("Invalid entry.");
		
	return 0;
}

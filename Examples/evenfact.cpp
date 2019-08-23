#include <cstdio>  
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double fib;
	double first, second;
	double sum = 0;
	
	first = 0;
	second = 1;
	fib = 0;
	int n = 0;
	
	while( fib <= 4000000.000000 ) {
		fib = first + second;
		first = second;
		second = fib;
		n++;
		//	printf("%lf  ", fib);
		
		if( remainder(fib, 2) == 0.0 ){
			sum += fib;	
			//	printf(" sum = %lf\n", sum);
		}
	
	}
	printf("Sum of even terms not exceeding 4 million : %lf", sum);
	printf("\nNumber of terms evaluated in Fibonacci series: %d", n);
	return 0;
}

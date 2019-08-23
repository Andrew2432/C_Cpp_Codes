#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 0, i, j, k, m = 0;
	cin >> n;
	i = 1; k = 1;
	
	while(i <= n) {
		j = n - i;
		if( j !=0 ) cout << string(j, ' ');
		cout << string(k, '*');
		if( j != 0) cout << string(j, ' ');
		cout << endl;
		
		i++;
		j--;
		k += 2;
	}
	
	return 0;
}

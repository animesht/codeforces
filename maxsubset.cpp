#include <iostream>
using namespace std;
int max (int a, int b) {
	return a>b?a:b;
}

int maxsubset(int a[], int n) {
	int maxsofar = a[0], i;
	int curmax = a[0];

	for (int i=0; i<n; i++) {
		curmax = max(a[i], curmax+a[i]);
		maxsofar = max(curmax, maxsofar);
	}
	return maxsofar;
}

int main() {

	int a[] = {2,1,2,3,51,332,-2,-15,-10, 1,2 ,31};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxsubset(a, n);
	
	return 0;
}
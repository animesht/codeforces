#include <iostream>

using namespace std;

int n,k;
int a[100];

int main() {
	
	int ctr=0;	
	cin>>n>>k;

	for (int i=0; i<n; i++) {
		cin>>a[i];
	}

	for (int i=0; i<n; i++) {
		if ((a[i] >= a[k-1]) && (a[i] > 0))
			ctr++;
	}
	cout<<ctr;

	return 0;
}
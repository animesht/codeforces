#include <iostream>

using namespace std;


int bsearch (int a[], int n, int lo, int hi) {

	while (lo<=hi) {

	int mid = (lo+hi)/2;

	if (a[mid] == n) 
		return mid;
	else if (a[mid] < n)
		return bsearch(a, n, mid+1, hi);
	else 
		return bsearch (a, n, lo, mid-1);

	}
	return -1;
}

int search (int a[], int n, int si) {
	return bsearch (a, n, 0, si);
}

int main() {
	int n, si;
	int a[100];
	cout<<"Size:"<<endl;
	cin>>si;
	for (int i=0; i<si; i++) {
		cin>>a[i];
	}
	cout<<"Elt to search:\n";

	cin>>n;
	cout<<search (a, n, si)<<endl;

	return 0;
}
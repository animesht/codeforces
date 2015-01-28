#include <iostream>

using namespace std;

int n;
int a[1001];
int b[1001];
int c[1001];
int ctr = 0;
int main() {
	cin>>n;
	for (int i=0; i<n; i++) 
		cin>>a[i]>>b[i]>>c[i];

	for (int i=0; i<n; i++)
		if ((a[i]+b[i]+c[i]) >= 2)
			ctr++;

	cout<<ctr;

	return 0;
}
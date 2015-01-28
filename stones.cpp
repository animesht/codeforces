#include <iostream>

using namespace std;

int n;
int t;
int ctr = 0;
int main() {
	
	cin>>n;
	char a[n];
	for (int i=0; i<n; i++)
	 	cin>>a[i];

	for (int i=0; i<n; i++) {
		if (a[i]==a[i+1])
			ctr++;
	} 

	cout<<ctr;
	return 0;
}
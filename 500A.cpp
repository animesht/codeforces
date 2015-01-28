#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, dest;
	cin>>n>>dest;
	vector<int> v;
	v.resize(n);
	
	for (int i=1; i<n; i++)
		cin>>v[i];

	vector<bool> b;
	b.resize(2*n);
	
	int j = 1;
	
	while(j<=n) {
		b[j] = true;
		j += v[j];
	}

	for (int i=1; i<n; i++) 
		cout<<b[i]<<" ";
	cout<<endl; 
	if (b[dest]) 
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}
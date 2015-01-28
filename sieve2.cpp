#include <iostream>
#include <vector>

using namespace std;

void mark(int a, int n, vector<bool> v) {
	if (a>1) 
		for (int i=2; a*i<=n; i++) 
			v[a*i] = false;
}

vector<bool> v;

int main() {
	int n;
	cin>>n;
	v.resize(n);

	for (int i=0; i<n; i++)
		v[i] = true;

	for (int i=2; i<n; i++) {
		if (v[i]) {
			cout<<i<<endl; 
			mark(i, n, v);
		}
	}

}
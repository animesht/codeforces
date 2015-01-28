#include <iostream>

using namespace std;

void mark(int a, int n, bool v[]) {
	if (a>1) {
		for (int i=2; i*a<n; i++)
			v[i*a] = false;
	}
}

int main() {

	int n;
	cin>>n;

	bool v[10000];
	memset(v, true, 10000);

	for (int i=2; i<n; i++) {
		if (v[i]) {
			cout<<i<<endl;
			mark(i,n,v);
		}
	}
}
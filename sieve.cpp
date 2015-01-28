#include <iostream>
#include <cmath>

using namespace std;

void mark(int a, int n, bool m[]) {
	if (a>1) {
		for (int i=2; i*a<n; i++) 
			m[i*a] = true;
	}
}
int main() {
	int n;
	cin>>n;
	bool v[10000];
	memset (v, false, 10000);

	for (int i=2; i<n; i++) {
		if (v[i] == false) {
			mark(i, n, v);
			cout<<i<<endl;
		}
	}

	return 0;
}
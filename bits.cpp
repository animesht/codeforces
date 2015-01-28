#include <iostream>
#include <math.h>

using namespace std;

int n, c;
long long l[10001];
long long r[10001];

int popcount(int l, int r) {
	int b = floor(log2(r)) + 1;
	if ((floor(log2(l)+1)) == b)  
		return l;
	else {
		for (int j= (l>pow(2,b) ? l:pow(2,b)); j<=r; j++) {
			if (floor(log2(j))==b) 
				return j;
		}
	}
}

int main() {
cin>>n;
for (int i=0; i<n; i++) {
	cin>>l[i]>>r[i];
}

for (int i=0; i<n; i++) {
	c = popcount(l[i], r[i]);
	cout<<c;
}

return 0;
}

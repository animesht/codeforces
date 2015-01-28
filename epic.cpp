#include <iostream>

using namespace std;

int a,b,n;

int findgcd(int a, int n) {
	int gcd = 1;
	for (int i=0; (i<=a && i<=n); i++) {
		if ((a%i == 0) && (n%i == 0))
			gcd = i;
	}
	return gcd;
}

int main() {
	
cin>>a>>b>>n;

int ans = findgcd(a, n);
cout<<ans;
return 0;
}
#include <iostream>

using namespace std;

long long a, m;

bool chk (long long a, long long m) {
a+=a%m;
if (a%m != 0 &&) {
if (a<100001 && m<100001) 
	chk (a, m);
else 
	return false;
}
else
	return true;
}

int main() {
cin>>a>>m;
if(chk(a,m))
	cout<<"Yes";
else 
	cout<<"No";
return 0;
}

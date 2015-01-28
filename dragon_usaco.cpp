#include <iostream>

using namespace std;

long long k,l,m,n,d;
long sum = 0;

int main() {
cin>>k>>l>>m>>n>>d;
int count = 0;
for(int i = 1; i <=d; i++)
{
	if(!(i % k) + !(i % l) + !(i%m) + !(i % n))
		count++;
}
cout << count << endl;
}
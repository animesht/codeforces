#include <iostream>

using namespace std;

int a,b,n, flag;

int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}

int main() {
	cin>>a>>b>>n;
	while (n>0) {
		n-=gcdr(n,a);
		if (n<=0) {
			flag = 0;
			break;
		} 

		n-=(gcdr(n,b));
		if (n<=0) {
			flag = 1;
			break;
		}
	}

	cout<<flag;
	return 0;

}
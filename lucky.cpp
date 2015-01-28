#include <iostream>
#include <string.h>

using namespace std;
bool flag = false;
char m;
long int ctr = 0;
int main() {
while (!cin.eof()) {
	cin>>m;
	if ((m != '7') && (m != '4')) {
		flag = true;
		break;
	}
	else 
		ctr++;
}

if (flag || ctr<=1) 
	cout<<"NO";
else 
	cout<<"YES";

return 0;
}
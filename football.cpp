#include <iostream>
#include <string.h>
using namespace std;

char a[100];
int ctr = 0;
int main() {
	
	cin>>a;

	for (int i=0; i<strlen(a); i++) {
		if (a[i] == a[i+1]) 
			ctr++;
		else 
			ctr = 0;

		if (ctr >=6)
			break;
	}

	if (ctr>=6)	
		cout<<"YES";
	else	
		cout<<"NO";

	return 0;
}
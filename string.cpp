#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

char a[100];
char b[500];
char v;
int j=0;
int main() {
	
	cin>>a;

	for (int i=0; i<strlen(a); i++) {
		v = toupper(a[i]);
		if (v =='A' || v == 'E' || v == 'I' || v == 'O' || v == 'U' || v == 'Y') 
			continue;
		else {
			b[j] = '.';
			b[j+1] = tolower(a[i]);
			j+=2;
		}
	}

	cout<<b;

	return 0;
}
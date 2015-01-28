#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

char a[100];
bool f1;
int v;

void switchcase(char a[]) {
	char b[100];
	if (strlen(a)>1) {
	for (int i=0; i<strlen(a); i++) {
		if (islower(a[i]))
			b[i] = toupper(a[i]);
		else 
			b[i] = tolower(a[i]);
	}
	}
	else {
		if (islower(a[0]))
			b[0] = toupper(a[0]);
		else 
			b[0] = tolower(a[0]);
	}
	cout<<b;
}

int main() {
	f1 = 1;
	cin>>a;
	for (int i=0; i<strlen(a); i++) {
		if (isalpha(a[i])) {
			if (islower(a[i]) && i != 0) {
				f1 = 0;
				break;
			}
		}
		else 
			break;
	}
	
	if (f1 == 1) 
		switchcase(a);
	else 
		cout<<a;
	return 0;
}
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
//testing
int chk(char c[101], char d[101]) {
	bool flag = true;

	char a[101]; char b[101];

	for (int i=0; i<strlen(c); i++) {
		if (c[i]==' ') {
			i--;
			continue;
		}
		a[i] = tolower(c[i]);
	}

	for (int i=0; i<strlen(d); i++) {
		if (d[i]==' ') {
			i--;
			continue;
		}
		b[i] = tolower(d[i]);
	}
	for (int i=0; i < (strlen(a) > strlen(b) ? strlen(a) : strlen(b)); i++) {
		if (a[i] != b[i]) {
			flag = false;
			if ((int)a[i] > (int)b[i])
				return 1;
			else 
				return -1;
		}
	}
	if (flag) 
		return 0;
}

int main() {
	char a[101];
	char b[101];
	cin>>a;
	cin>>b;
	int ans = chk(a,b);
	cout<<ans;
	return 0;
}
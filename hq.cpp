#include <iostream>
#include <string.h>
using namespace std;

char p[101];
char h = 'H';
char pl = '+';
char q = 'Q';
int main() {
	cin>>p;
	if (strchr(p, h)!=NULL || strchr(p, pl)!=NULL || strchr(p, q)!=NULL)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
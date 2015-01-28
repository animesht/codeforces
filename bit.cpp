#include <iostream>
#include <string.h>
using namespace std;

int n;
char p1[5]="X++";
char p2[5]="++X";
char n1[5]="X--";
char n2[5]="--X";

int main() {
	int x = 0;
	cin>>n;
	char a[n][10];

	for (int i=0; i<n; i++) 
		cin>>a[i];

	for (int i=0; i<n; i++) {
		if (!strcmp(a[i], p1) || !strcmp(a[i], p2))
			x++;
		else if (!strcmp(a[i], n1) || !strcmp(a[i], n2))
			x--;
	}

	cout<<x;

	return 0;
}
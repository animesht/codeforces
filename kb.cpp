#include <iostream>
#include <cstring>

using namespace std;

int csearch(char c, char a[], char dir) {
	for (int i=0; i<strlen(a); i++)
		if (c == a[i])
			if (dir == 'L')
				return ++i;
			else
				return --i;
}

int main() {
	
	char a[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char dir, code[101];
	cin>>dir;
	cin>>code;
	
	for (int i=0; i<strlen(code); i++) 
		code[i] = a[csearch(code[i], a, dir)];
	cout<<code;
	return 0;
}
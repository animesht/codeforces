#include <iostream>
#include <string.h>
using namespace std;

char str[50];
char rev[50];
int main() {

cin>>str;
int l = strlen(str) - 1;
for (int i=0; i<=l; i++) 
	rev[i] = str[l-i];
cout<<rev;
return 0;

}

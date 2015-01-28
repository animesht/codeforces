#include <iostream>
#include <string.h>
#include <ctype.h>


using namespace std;
char a[1001];

int main() {
	cin>>a;
	if (isalpha(a[0])) {
		if(islower(a[0])) 
			a[0] = toupper(a[0]);
		cout<<a;
	}
	return 0;
}
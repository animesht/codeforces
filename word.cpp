#include <iostream>
#include <string.h>

using namespace std;

int n;
int len;
int main() {
	cin>>n;
	char words[n][101];
	for (int i=0; i<n; i++)
		cin>>words[i];

	for (int i=0; i<n; i++) {
		len = strlen(words[i]);
		if (len>10) 
			cout<<words[i][0]<<len - 2<<words[i][len-1]<<endl;
		else 
			cout<<words[i]<<endl;
	}

	return 0;
}
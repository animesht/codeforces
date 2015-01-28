#include <iostream>
#include <cstring>

using namespace std;

char* atoi(char str[100]) {
	char temp;
	for (int i=0; i<strlen(str)/2; i++) {
		temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}

	return str;
}

int main() {
	while(!cin.eof()) {
	char str[100];
	cin>>str;
	cout<<atoi(str)<<endl;
}
}
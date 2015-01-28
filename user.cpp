#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string.h>
using namespace std;
char s[101];
map<char, int> a;
char m;
int main() {
	cin>>s;

	for (int i=0; i<strlen(s); i++) {
	m = s[i];
	if (a.find(m) != a.end()) 
		a[m]++;
	else 
		a[m] = 1;
	}

	if(a.size() % 2) 
		cout<<"IGNORE HIM!";
	else 
		cout<<"CHAT WITH HER!";

	return 0;
}
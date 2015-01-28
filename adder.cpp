#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

char s[100];
vector<int> a;

int main() {
	cin>>s;
	for (int i=0; i<strlen(s); i+=2) {
		a.push_back(s[i]);
	}
	sort(a.begin(), a.end());
	for (int i=0; i<a.size(); i++) {
		cout<<(char)a[i];
		if (i != a.size()-1)
			cout<<"+";
	}
	return 0;
}
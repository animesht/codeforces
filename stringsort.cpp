#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <list>
#include <string>

using namespace std;

int main() {
	char a[100];
	map<string, list<char*> > c;

	int n, len;
	cout<<"Enter number of words";
	cin>>n;
	char s[100], t[100];
	len = strlen(t);
	for (int i=0; i<n; ++i) {
		cin>>t;
		for (int j = 0; j<len; j++) 
			s[j] = t[j];
		sort(t, t+len);
		c[t].push_back(s);
	}

	cout<<"Enter word to look for it's anagrams\n";

	char word[100];
	cin>>word;
	len = strlen(word);
	sort(word, word+len);
	cout<<word<<endl;
	cout<<c[word].front()<<endl;
	if(c.find(word) != c.end()) {
		list<char*>::iterator i;

		for(i = c[word].begin(); i != c[word].end(); ++i) {
			cout<<*i<<" ";
		}
	}
}
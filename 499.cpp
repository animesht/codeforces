#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int lecture;
int langs;
map<string, string> b;
vector<string> v;
int main() {
	cin>>lecture;
	cin>>langs;
	string l;
	for (int i=0; i<langs; i++) {
		cin>>l;
		cin>>b[l];
	}	
	for (int i=0; i<lecture; i++) {
		cin>>l;
		if (l.length() <= b[l].length()) 
			v.push_back(l);
		else 
			v.push_back(b[l]);
	}

	for (int i=0; i<v.size(); i++) 
		cout<<v[i]<<" ";

	return 0;
}
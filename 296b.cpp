#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	map<string, string> o,n;
	vector<string> count;
	string s,t;
	int q;
	
	cin>>q;

	for (int i=0; i<q; i++) {
		cin>>s>>t;
		if(n.find(s) != n.end()) {
			n[t] = n[s];
			o[n[s]] = t;
			n.erase(s);
		}
		else {
			o[s] = t;
			n[t] = s;
			count.push_back(s);
		}
	}
		cout<<count.size()<<endl;
	for (int i=0; i<count.size(); i++)
		cout<<count[i]<<" "<<o[count[i]]<<endl;

	return 0;
}
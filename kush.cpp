#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <utility>
#include <cmath>

using namespace std;

int floor(vector<int> v, int key, char c) {
	int i = 0;
	while (v[i]<key && i<v.size()) 
		i++;
	if (c == 'f') return i;
	else return i+1;
}

int main() {
	
	pair<int,int> a;
	cin>>a.first>>a.second;
	cout<<a.first<<" "<<a.second;

	int t;
	cin>>t;
	for (int i=0; i<t; i++) {
		map<int, int> m;
		map<int, bool> b;
		vector<int> v, out;

		int n, mo, k, ins, key;
		cin>>n>>mo;
		v.resize(n);
		for (int j=0; j<n; j++) {
			cin>>k>>m[k];
			b[k] = true;
			v[j] = k;
		}

		sort(v.begin(), v.end());
		
		for (int p=0; p<mo; p++) {
			cin>>ins>>key;
			if (ins == 0) 
				out.push_back(m[v[0]]);
			else if (ins == 1) {
				if (b[key]) 
					out.push_back(m[key]);
				else 
					out.push_back(m[floor(v, key, 'f')]);
			}
			else if (ins == 2) {
				if (b[key]) 
					out.push_back(m[key]);
				else 
					out.push_back(m[floor(v, key, 'c')]);
			}
			else if (ins == 3) 
				out.push_back(floor(v, key, 'f'));
		}

		for (int c=0; c<out.size(); c++) 
			cout<<out[c]<<endl;
	}


	return 0;
}
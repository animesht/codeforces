#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	vector<int> w;
	vector<int> q;

	int a,b,t;
	cin>>a;
	for (int i=0; i<a; i++) {
		cin>>t;
		v.push_back(t);
	}
	cin>>b;

	for (int i=0; i<b; i++) {
		cin>>t;
		w.push_back(t);
	}
	sort(v.begin(), v.end());
	sort(w.begin(), w.end());
	for (int i=0; i<a; i++) {
		cout<<v[i]<<"\t";
	}
 	cout<<endl;
	for (int i=0; i<b; i++) {
		cout<<w[i]<<"\t";
	}
	int i, j;
	while (i<v.size() && j<w.size()) {
		if (v[i]<w[j]) {
			i++;
		}
		else if (w[j]<v[i]) {
			j++;
		}
		else {
			q.push_back(v[i]);
			i++;
			j++;
		}
	}

	for (int i=0; i<q.size(); i++) {
		cout<<endl;
		cout<<q[i]<<"\t";
	}


	return 0;
}
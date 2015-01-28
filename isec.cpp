#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a, b;
	int s1, s2;
	cin>>s1;
	a.resize(s1);
	for (int i=0; i<s1; i++) {
		cin>>a[i];
	}
    cin>>s2;
    b.resize(s2);
    for (int i=0; i<s2; i++) {
		cin>>b[i];
	}

	int i, j;
	vector<int> result;
	while(i<a.size() && j<b.size()) {
		if(a[i] < b[j]) 
			i++;
		else if (a[i] > b[j]) 
			j++;
		else {
			result.push_back(a[i]);
			i++;
			j++;
		}
	}

	for(int k=0; k<result.size(); k++) 
		cout<<result[k];
}
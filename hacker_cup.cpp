#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	
	int t, min, max, l;
	char temp;
	cin>>t;
	char v[100][20];
	vector<string> mins;
	vector<string> maxes;
	for (int i=0; i<t; i++) 
		cin>>v[i];

	for (int i=0; i<t; i++) {
		l = strlen(v[i]);
		min = max = 0;
		for (int j=0; j<l; j++) {
			if (v[i][j] > v[i][max]) 
				max = j;
			if (v[i][j] < v[i][min] && (v[i][j] != '0' || l == 1))
				min = j;
		}
		temp = v[i][0];
		v[i][0] = v[i][max];
		v[i][max] = temp;
		mins.push_back(v[i]);
		v[i][max] = v[i][0];
		v[i][0] = temp;
		v[i][0] = v[i][min];
		v[i][min] = temp;
		maxes.push_back(v[i]);
	}

	for (int i=0; i<t; i++)
		cout<<"Case #"<<i+1<<": "<<maxes[i]<<" "<<mins[i]<<endl;

	return 0;
}
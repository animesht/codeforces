#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <stack>
#include <cassert>
#include <set>
#include <string>
#include <cstring>

using namespace std;


int main() {
	long n;
	cin>>n;
	string t;
	vector<string> c;

	for (long i = 0; i<n; i++) {
		cin>>t;
		c.push_back(t);
	}
	long p, q;
	for (long i = 0; i<n; i++) {
		if (c[i][0] == 'R') {
			char a[100],b[100];
			int m = 1;
			int n = 0;
			while (c[i][m] != 'C') {
				a[m-1] = c[i][m];
				m++;
			}
			m++;
			while (m < (c[i].length())) {
				b[n] = c[i][m];
				m++;
				n++;
			}
			string a1(a);
			string b1(b);
			p = stol(a1); //row
			q = stol(b1); //col
			cout<<p<<" "<<q<<endl;
			char k[500];
			int cc = 0;
			do {
				k[cc] = 64 + (q%26);
				q /= 26;
				cc++;
			} while (q > 0);
			cout<<"K: "<<k<<endl;
			char k2[500];
			for (int y = 0; y<strlen(k); y++) 
				k2[y] = k[strlen(k) - 1 - y];
			cout<<k2<<p<<endl;
			string kk;
			for (int u = 0; u<strlen(k); u++) 
				kk[u] = (char)(65+k2[u]);
		}
	}


	return 0;
}
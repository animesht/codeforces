#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#define rf freopen("in.in", "r", stdin)
using namespace std;


int main() {
	//rf;
	string t;
	long p,q,n;
	cin>>n;
	vector<string> c;

	for (long i = 0; i<n; i++) {
		cin>>t;
		c.push_back(t);
	}
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
			p = stol(a1); 
			q = stol(b1);
			char k[100];
			int cc = 0;
			do {
				k[cc] = 64 + (q%26);
				q /= 26;
				cc++;
			} while (q > 0);

			int len = strlen(k);
			char k2[100];
			for (int y = 0; y<len; y++) 
				k2[y] = k[len - 1 - y];
			k2[len]='\0';
			cout<<k2<<p<<endl;
		}
		else {
			int jl = 0;
			char r[100];
			while (c[i][jl]>=65 && c[i][jl]<=90) {
				r[jl] = c[i][jl];
				jl++;
			}
			char h[100];
			int u = 0;
			while (jl<c[i].length()) {
				h[u] = c[i][jl];
				jl++;
				u++;
			}
			h[u] = '\0';
			long sum = 0;
			int io = strlen(r)-1;
			for (int y = 0; y <= io; y++) 
				sum += pow(26, io-y)*(r[y]-64);
			cout<<"R"<<h<<"C"<<sum << endl;
		}
	}


	return 0;
}
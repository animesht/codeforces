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
	int n;
	cin>>n;
	for (int j = 0; j<n; j++) {
		for (int i = 1; i < (n - j)*2; ++i) 
			cout<<" ";
		for (int i = 0; i<j; i++) 
			cout<<" "<<i;
		for (int i = j; i>=0; i--)
			cout<<" "<<i;
		cout<<endl;
	}
	for (int j = n; j>=0; j--) {
		for (int i = 1; i < (n - j)*2; ++i) 
			cout<<" ";
		for (int i = 0; i<j; i++) {
			if (j==n && i==0) 
				cout<<i;
			else
				cout<<" "<<i;
		}
		for (int i = j; i>=0; i--)
			cout<<" "<<i;
		cout<<endl;
	}

	return 0;
}
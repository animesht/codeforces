#include <iostream>

using namespace std;

int cur = 0;
int m = 0;
int n;
int in[1001];
int out[1001];

int main() {
	
	cin>>n;

	for (int i=0; i<n; i++) 
		cin>>out[i]>>in[i];

	for (int i=0; i<n; i++) {
		cur -= out[i];
		cur += in[i];
		if (cur > m) 
			m = cur;
	}
	cout<<m;
	return 0;
}
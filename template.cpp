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
	char a[101];
	char b[101];
	bool flag = false;
	if (strlen(a) == strlen(b)) {
		int len = strlen(a);
	for (int i=0 ; i < len; i++) {
		if (a[i] != b[len - i - 1]) 
			flag = true;
	}
	if (flag == true) 
		cout<<"NO";
	else 
		cout<<"YES";
	
	return 0;
}
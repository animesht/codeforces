#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<vector<bool> > f;

class seat {
public:
	int x;
	int y;
};

bool validate (int x, int y) {
	return f[x][y];
}

int main() {
	
	int r, c, n, tx, ty, radius, x2, y2;

	cin>>r>>c>>n;
	f.resize(r);

	for (int i=0; i<r; i++) {
		f[i].resize(c);
		for (int j=0; j<c; j++)
			f[i][j] = false;
	}

	vector<seat> s;
	
	s.resize (n);
	for (int i=0; i<n; i++)
		cin>>s[i].x>>s[i].y;

	for (int i=0; i<n; i++) {
		if (validate(s[i].x, s[i].y)) {
			f[s[i].x][s[i].y] = true;
		}
		else {
			tx = s[i].x;
			ty = s[i].y;
			radius = 1;

			while ()
		}
	}

	return 0;
}
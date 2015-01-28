#include <iostream>
#include <vector>

using namespace std;

bool validate (vector<vector<int> > v) {
	bool hit[10];
	//check rows
	for (int i=0; i<9; i++) {
		memset(hit, false, 9);
		for (int j=0; j<9; j++) {
			if(v[i][j] == -1) continue;
			else if (hit[v[i][j]]) return false;
			hit[v[i][j]] = true;
		}
	}
	//check columns
	for(int i=0; i<9; i++) {
		memset(hit, false, 9);
		for (int j=0; j<9; j++) {
			if (v[j][i] == -1) continue;
			else if (hit[v[j][i]]) return false;
			hit[v[j][i]] = true;
		}
	}
	//check 3x3 grids
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			memset(hit, false, 9);
			for (int k=0; k<9; k++) {
				for (int l=0; l<3; l++) {
					int r = i*3 + k;
					int c = j*3 + l;
					if (v[r][c] == -1) continue;
					else if (hit[v[r][c]]) return false;
					hit[v[r][c]] = true;
				}
			}
		}
	}
	return true;
}

int main() {
	vector<vector<int> > board;
	
	board.resize(9);

	for (int i=0; i<9; i++) {
		board[i].resize(9);
		for (int j=0; j<9; j++) 
			board[i][j] = -1;
	}

	board[1][2] = 1;
	board[1][3] = 2;
	if (validate(board)) cout<<"works!";
	else cout<<"doesn't work!";
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

bool validate(vector<vector<int> > v) {
	bool hit[9];
	memset(hit, false, 9);
	for (int i=0; i<9; i++) {
		for (int j=0; j<9; j++) {
			if (hit[v[i][j]] && v[i][j] != -1)
				return false;	
			hit[v[i][j]] = true;
		}
	}

	memset(hit, false, 9);	
	for (int i=0; i<9; i++) {
		for (int j=0; j<9; j++) {
			if (hit[v[j][i]] && v[j][i] != -1) 
				return false;
			hit[v[j][i]] = true;
		}
	}

	for (int i = 0; i<3; i++) {
		for (int j=0; j<3; j++) {
			memset(hit, false, 9);
			for (int k=0; k<3; k++) {
				for (int l=0; l<3; l++) {
					
					int r = 3*i + k;
					int c = 3*j + l;

					if (hit[v[r][c]] && v[r][c] != -1)
						return false;	
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
	for(int i=0; i<9; i++) {
		board[i].resize(9);
		for(int j=0; j<9; j++)
			board[i][j] = -1;
	}
	board[1][1] = 1;
	board[1][2] = 2;
	board[1][3] = 1;

	if(validate(board)) cout<<"Works!!!";
	else cout<<"Doesn't Work!!";
}

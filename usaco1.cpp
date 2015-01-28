/*
ID: me42
PROG: gift1
LANG: C++       
*/

#include <iostream>
#include <fstream>
using namespace std;

int len (int m, int y) {
	if (m == 2) 
		return (y%4 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
	else 
		return (m == 4 || m == 6 || m == 9 || m == 11) ? 30 : 31;
}

int main() {

    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n;
	int day = 2;
	int c[8];
	int y = 1900;
	fin>>n;

	for (int i = 1; i < 8; i++)
		c[i] = 0;

	for (int i = y; i < (y + n); i++) {
		for (int m = 1; m <= 12; m++) {
			for (int d = 1; d <= len(m, i); d++) {
					if (d == 13) c[day]++;
					day = (day == 7) ? 1 : day+1;
				}
		}
	}

	cout<<c[7]<<" ";
	for (int o = 1; o < 7; o++) 
		cout<<c[o]<<" ";
    cout<<endl;
    return 0;
}
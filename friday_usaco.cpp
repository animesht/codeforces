/*
ID: me42
PROG: friday
LANG: C++       
*/

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {

    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    
    int n;
	int day = 2; //1-Sun, 2-Mon, 3-Tue, 4-Wed, 5-Thu, 6-Fri, 7-Sat
	int y = 1900;
	map<int, int> c;

	fin>>n;

	for (int i = y; i < (y+n); i++) {
		for (int m = 1; m<13; m++) {
			if (((m%2) && (m<8)) || (!(m%2) && (m>=8))) { //Jan, Mar, May, Jul, Aug, Oct, Dec
				for (int d = 1; d < 32; d++) {
					if (d == 13) 
						c[day] = (c.find(day) != c.end()) ? c[day]+1:1;
					day = (day == 7) ? 1:day+1;
				}
			}
			else if (m == 2) { //Feb
				int fd = 29;
				//fd++ for leap years
				if (((i%4 == 0) && (i%100 != 0)) || ((i%100 == 0) && (i%400 == 0)))
					fd++;
				for (int d = 1; d<fd; d++) {
					if (d == 13) 
						c[day] = (c.find(day) != c.end()) ? c[day]+1:1;
					day = (day == 7) ? 1:day+1;
				}
			}
			else { //Apr, Jun, Sep, Nov
				for (int d = 1; d<31; d++) {
					if (d == 13) 
						c[day] = (c.find(day) != c.end()) ? c[day]+1:1;
					day = (day == 7) ? 1:day+1;
				}
			}
		}
	}
	fout<<c[7]<<" ";
	for (int o = 1; o<6; o++) 
		fout<<c[o]<<" ";
    fout<<c[6]<<endl;
    return 0;

}
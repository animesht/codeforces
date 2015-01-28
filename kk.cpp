#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int eq = 0;
	for(int i = 0; i < s1.size(); i++)
	{
		char c1, c2;
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
		if(c1 < c2)
		{
			eq = -1;
			break;
		}
		if(c2 < c1)
		{
			eq = 1;
			break;
		}
	}
	cout << eq << endl;
	
}
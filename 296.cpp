#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int a,b,c,d;
	float s1, s2;

	cin>>a>>b>>c>>d;

	s1 = max(3*a/10, a - a/250 * c);
	s2 = max(3*b/10, b - b/250 * d);

	if (s1>s2)
		cout<<"Misha";
	else if (s2>s1)
		cout<<"Vasya";
	else
		cout<<"Tie";

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct S
{
	int l, r;
};

bool Cmp(S a, S b)
{
	if(a.l < b.l)
		return true;
	if(b.l < a.l)
		return false;
	if(a.r > b.r)
		return true;
	return false;
}
int n;
int x;
S s[100];
int main()
{
	cin >> n >> x;
	for(int i= 0; i < n; i++)
		cin >> s[i].l >> s[i].r;
	sort(s, s + n, Cmp);
	int i = 0;
	int cur = 1;
	int result = 0;
	while(i < n)
	{
		if(cur == s[i].l)
		{
			cur = s[i].r + 1;
			result += s[i].r - s[i].l + 1;
			i++;
			continue;
		}
		if(cur > s[i].l)
		{
			i++;
			continue;
		}
		if(cur + x <= s[i].l)
		{
			cur += x;
			continue;
		}
		else
		{
			cur++;
			result++;
			continue;
		}
	}
	cout << result << endl;
}

#include <string>
#include <iostream>
#include <map>
using namespace std;

map<string, int> ma;
int main()
{
	int w;
	cin >> w;
	for (int a = 0; a < w; a++)
	{
		int n,cnt=1;
		string  s2;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> s2 >> s2;
			if (ma.find(s2) == ma.end())
			{
				ma.insert({ s2, 2 });
			}
			else
			{
				ma[s2]++;
			}
		}
		while (!ma.empty())
		{
			cnt *= ma.begin() -> second;
			ma.erase(ma.begin());
		}
		cout << cnt - 1 << '\n';
	}
}
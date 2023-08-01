#include <iostream>
#include <map>
using namespace std;

map<string, int> ma;

int main()
{
	int n, m, cnt = 0;
	string name;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> name;
		ma.insert({name, 1});
	}

	for (int i = 0; i < m; i++)
	{
		cin >> name;
		if (!(ma.find(name) == ma.end()))
		{
			cnt += 1;
		}
	}
	cout << cnt;
}
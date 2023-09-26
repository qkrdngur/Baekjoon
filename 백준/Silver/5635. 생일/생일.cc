#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<pair<int, string>> v;
	int repeat = 0;
	cin >> repeat;

	string s;
	int d, mon, y;
	for (int i = 0; i < repeat; i++)
	{
		int save = 0;
		cin >> s;
		cin >> d >> mon >> y;
		save = y * 1000 + mon * 10 + d;
		v.push_back(make_pair(save, s));
	}
	sort(v.begin(), v.end());
	cout << v[repeat - 1].second << '\n' << v[0].second;
}
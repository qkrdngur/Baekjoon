#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main()
{
	int n;
	int a, b, saveNum = 0;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end());;

	for (int i = 0; i < v.size(); i++)
	{
		if (saveNum > v[i].second) continue;

		count++;
		saveNum = v[i].first;
	}

	cout << count;
}
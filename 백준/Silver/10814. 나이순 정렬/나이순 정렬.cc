#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, string>> v;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	int number;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number >> name;
		v.push_back(make_pair(number, name));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (auto a : v)
	{
		cout << a.first << " " << a.second << '\n';
	}
} 
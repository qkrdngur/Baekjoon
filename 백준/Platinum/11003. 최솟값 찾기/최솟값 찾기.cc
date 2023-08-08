#include <iostream>
#include <queue>
#include <deque>
#include <vector>
using namespace std;

//priority_queue<int, vector<pair<int, int>>, greater<>> q;
deque<pair<int, int>> dq;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, m;
	int num;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		if (!dq.empty())
		{
			if (dq.front().second < i - m + 1)
			{
				dq.pop_front();
			}
		}

		while (!dq.empty() && dq.back().first > num)
		{
			dq.pop_back();
		}
		dq.push_back(make_pair(num, i));

		cout << dq.front().first << '\n';
	}
}

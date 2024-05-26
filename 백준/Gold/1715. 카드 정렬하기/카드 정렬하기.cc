#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int  n;
	int save = 0;
	int result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int vn;
		cin >> vn;
		q.push(vn);
	}
	int a;

	while (q.size() >= 2)
	{
		a = q.top();
		q.pop();
		save = a + q.top();
		q.pop();
		q.push(save);
		result += save;
		
	}
	cout << result;
}
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> v;
queue<int> q;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w, l;
	int totalW = 0, itime = 0;
	cin >> n >> w >> l;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{	
		while (true)
		{
			if (w == q.size())
			{
				totalW -= q.front();
				q.pop();
			}
			if (totalW + v[i] <= l)
				break;
			q.push(0);
			itime++;
		}
		q.push(v[i]);
		totalW += v[i];
		itime++;
	}
	cout << itime + w;
}
#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> v;
deque<int> dq;
int main()
{
	int n;
	int save = 0;
	cin >> n;

	v.resize(n);
	for (int i = n - 1; i >= 0; i--)
		cin >> v[i];

	for (int i = 0; i < n; i++)
	{
		if (v[i] == 1)
		{
			dq.push_front(i + 1);
		}
		else if (v[i] == 2)
		{
			save = dq.front();
			dq.pop_front();
			dq.push_front(i + 1);
			dq.push_front(save);
		}
		else if (v[i] == 3)
		{
			dq.push_back(i + 1);
		}
	}

	deque<int>::iterator iter = dq.begin();
	for (; iter != dq.end(); iter++)
	{
		cout << *iter << ' ';
	}
}

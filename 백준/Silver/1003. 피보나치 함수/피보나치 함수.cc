#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int memo[1000];
int a = 0;
int cnt = 0;

int f(int x)
{
	//종료 조건
	if (x <= 0)
		return 0;
	if (x <= 2)
		return 1;

	if (memo[x] != 0) return memo[x];

	memo[x] = (f(x - 2) + f(x - 1));

	return memo[x];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < cnt; i++)
	{
		if (v[i] == 0)
			cout << 1 << " " << 0 << endl;
		else
			cout << f(v[i] - 1) << " " << f(v[i]) << endl;
	}
}
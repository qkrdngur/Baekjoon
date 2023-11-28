#include <iostream>
#include <vector>
using namespace std;

int DP[10001] = {0, 1, 1, 1};

int f(long long n)
{
	/*if (n <= 3)
		return DP[n];

	return DP[n] = f(n - 2) + f(n - 3);*/
	if (n == 0)
		return 0;

	if (n <= 2)
		return 1;

	vector<long long>v(n + 1);
	v[0] = 0;
	v[1] = v[2] = v[3] = 1;
	for (long long i = 3; i <= n; i++)
	{
		v[i] = v[i - 2] + v[i - 3];
	}

	return v[n];
}

int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n;
	cin >> n;
	cout << f(n);*/
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		vector<long long> v(n + 1);
		v[0] = v[1] = v[2] = 1;
		for (int i = 3; i <= n; i++)
		{
			v[i] = v[i - 3] + v[i - 2];
		}
		cout << v[n - 1] << '\n';
	}
}

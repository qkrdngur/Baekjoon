#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long s;
	long long int result = 0,sum = 0;
	cin >> s;

	for (int i = 1; ;i++)
	{
		if (sum > s)
		{
			result--;
			break;
		}
		result++;
		sum += i;
	}

	cout << result;
}
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	int zero = 0, one = 0;
	int result;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != str[i + 1])
		{
			if (str[i] == '0')
				zero++;
			else
				one++;
		}
	}

	result = min(one, zero);
	cout << result;
}
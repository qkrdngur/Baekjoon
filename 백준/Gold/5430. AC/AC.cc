#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int repeat, n, c;
	bool isR, isE;
	string p, x, save;

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		isR = false;
		isE = false;
		deque<int> dq;
		cin >> p >> n >> x;
		for (int a = 0; a < x.size(); a++)
		{
			if (x[a] >= '0' && x[a] <= '9')
			{
				save += x[a];
			}
			else if (x[a] >= ',' && x[a] <= ']')
			{
				if (!save.empty())
				{
					dq.push_back(stoi(save));
					save = "";
				}
			}
		}

		for (int a = 0; a < p.size(); a++)
		{
			if (p[a] == 'R')
			{
				isR = !isR;
			}
			else if(p[a] == 'D')
			{
				if (dq.empty())
				{
					cout << "error" << endl;
					isE = true;
					break;
				}
				else
				{
					if (isR)
					{
						dq.pop_back();
					}
					else
					{
						dq.pop_front();
					}
				}
			}
		}
		c = dq.size();
		if (!isE)
		{
			if (isR)
			{
				cout << '[';
				for (int b = 0; b < c; b++)
				{
					cout << dq.back();
					if(b + 1 != c)
					cout << ',';
					dq.pop_back();
				}
				cout << ']' << endl;
			}
			else
			{
				cout << '[';
				for (int b = 0; b < c; b++)
				{
					cout << dq.front();

					if (b + 1 != c)
					cout << ',';
					dq.pop_front();
				}
				cout << ']' << endl;
			}
		}
	}
}
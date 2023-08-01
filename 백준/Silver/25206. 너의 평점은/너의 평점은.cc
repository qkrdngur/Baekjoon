#include <iostream>
using namespace std;

int main()
{
	string subject;
	double score, save;
	double sum = 0, sumScore = 0;
	string rat;
	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> score >> rat;
		if (rat == "P") continue;
		save = 0;
		if (rat[0] == 'A')
			save = 4;
		else if (rat[0] == 'B')
			save = 3;
		else if (rat[0] == 'C')
			save = 2;
		else if (rat[0] == 'D')
			save = 1;
		else
			save = 0;

		if (rat[1] == '+')
		{
			save += 0.5;
		}

		sum += score * save;
		sumScore += score;
	}
	cout.precision(7);
	cout << sum / sumScore;
}
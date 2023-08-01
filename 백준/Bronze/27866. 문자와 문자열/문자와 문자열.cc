#include <iostream>
#include <string>

using namespace std;

int main()
{
	string D;
	string S;
	int i;

	cin >> S >> i;

	D = S.substr(i - 1, 1);
	cout << D;
}
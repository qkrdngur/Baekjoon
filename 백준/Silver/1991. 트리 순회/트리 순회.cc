#include <iostream>
#include <map>
using namespace std;
map<char, pair<char, char>> node;

void preoeder(char ch)
{
	if (ch == '.')   return;
	cout << ch;

	preoeder(node[ch].first);
	preoeder(node[ch].second);


}
void inoeder(char ch)
{
	if (ch == '.')   return;
	inoeder(node[ch].first);
	cout << ch;


	inoeder(node[ch].second);


}
void postoeder(char ch)
{
	if (ch == '.')   return;

	postoeder(node[ch].first);
	postoeder(node[ch].second);

	cout << ch;

}
int main()
{
	int n;
	char left, right, name;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> left >> right;
		node[name] = { left, right };
	}

	preoeder('A'); cout << "\n";
	inoeder('A'); cout << "\n";
	postoeder('A'); cout << "\n";
}
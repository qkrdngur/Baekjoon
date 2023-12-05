#include <iostream>

using namespace std;

int DP[1002] = { 0, 1, 3, 5, 11, 21 };

int Tile(int n)
{
    if (n <= 0)
        return 0;
    if (DP[n] != 0)
        return DP[n];

    DP[n] = (Tile(n - 1) + (Tile(n - 2) * 2)) % 10007;
    return DP[n];
}

int main()
{
    int num, answer;
    cin >> num;

    cout << Tile(num);
}
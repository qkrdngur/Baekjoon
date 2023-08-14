#include <iostream>
using namespace std;
int pow(int a, int n)
{
    int p = 1;
    for(int i = 0 ; i < n; i++) p *= a;
    return p;
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    unsigned sum = 0;
    for(int i = 1, k = 1; i <= a+b; i=k+1)
    {
        k = (a+b)/((a+b)/i);
        sum += (a+b)/i * (k-i+1);
    }
    for(int i = 1, k = 1; i < a; i=k+1)
    {
        k = (a-1)/((a-1)/i);
        sum -= (a-1)/i * (k-i+1);
    }
    sum -= (b+1)*2 - (a==1);
    for(int i = 2; ; i++)
    {
        int pw = pow(i, n);
        if(pw > a+b) break;
        int m = (pw < a)?a-1:pw-1;
        sum -= (a+b)/pw - m/pw;
    }
    cout << sum;
}
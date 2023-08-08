#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int main()
{
    int n;
    int save;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> save;
        v.push_back(save);
    }
    sort(v.begin(),v.end());
    cout<<v.front()<<" "<<v.back();
}
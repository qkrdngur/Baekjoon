#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;
    int repeat = 0;
    string inputS;
    int inputI;

    cin >> repeat;
    
    for (int i = 0; i < repeat; i++)
    {
        cin >> inputS;
        if (inputS == "push_front")
        {
            cin >> inputI;
            dq.push_front(inputI);
        }
        else if (inputS == "push_back")
        {
            cin >> inputI;
            dq.push_back(inputI);
        }
        else if (inputS == "pop_front")
        {
            if (dq.empty())
                cout << -1 << endl;
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (inputS == "pop_back")
        {
            if (dq.empty())
                cout << -1 << endl;
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (inputS == "size")
        {
            cout << dq.size() << endl;
        }
        else if (inputS == "empty")
        {
            if (dq.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (inputS == "front")
        {
            if (dq.empty())
                cout << -1 << endl;
            else
                cout << dq.front() << endl;
        }
        else if (inputS == "back")
        {
            if (dq.empty())
                cout << -1 << endl;
            else
                cout << dq.back() << endl;
        }
    }
}
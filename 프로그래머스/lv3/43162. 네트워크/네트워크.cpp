#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<bool>visited(200, false);


void DFS(int n, int v, vector<vector<int>>linked)
{
    visited[v] = true;

    for (int i = 0; i < linked[v].size(); i++)
    {
        //v와 연결되어 있어있다 : isLinked = true;
        if (linked[v][ i] != 0 && visited[i] == false) {
            DFS(v, i, linked);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFS(n, i, computers);
            answer++;
        }
    }
    return answer;
}

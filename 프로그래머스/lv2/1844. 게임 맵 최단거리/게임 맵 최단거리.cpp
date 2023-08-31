#include <iostream>
#include <queue>
#include <vector>

using namespace std;

string arr[101];
int n, m;
int visited[101][101];
queue<pair<int, int>>q;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };
//vector<vector<int>> maps;

int solution(vector<vector<int>> maps)
{
    int col = maps.size();
    int row = maps[0].size();

    q.push({ 0, 0 });
    visited[0][0] = 1;
    // 이놈이 탐색 시작하는 위치
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (nx >= col || ny >= row) continue;
            if (nx < 0 || ny < 0) continue;

            if (maps[nx][ny] == 1 && visited[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
    return visited[col - 1][row - 1] != 0 ? visited[col - 1][row - 1] : -1;
}

#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
int length[101][101];
int visit[101][101];
int N, M;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;            //bfs에서는 q를사용
    q.push(make_pair(x, y));
    visit[y][x] = 0;                    //방문한 노드를 visit 1로 변경
    length[y][x] = 1;

    pair<int, int> dir[4] = {
            make_pair(1, 0), make_pair(0, 1), make_pair(-1, 0), make_pair(0, -1)
    };

    while (!q.empty()) {
        pair<int, int> temp = q.front();
        x = temp.first;
        y = temp.second;

        q.pop();

        int newX = 0, newY = 0;
        //4방향 체크
        for (int i = 0; i < 4; ++i)
        {
            newX = x + dir[i].first;
            newY = y + dir[i].second;

            if (newX >= 0 && newX < M && newY >= 0 && newY < N
                && map[newY][newX] == 1 && visit[newY][newX] != 1)
            {
                length[newY][newX] = length[y][x] + 1;
                visit[newY][newX] = 1;
                q.push(make_pair(newX, newY));
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    string inputStr;

    for (int i = 0; i < N; ++i)
    {
        cin >> inputStr;
        for (int j = 0; j < M; ++j)
        {
            map[i][j] = (inputStr[j] - '0');
        }
    }
    bfs(0, 0);
    cout << length[N - 1][M - 1];
}
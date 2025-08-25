#include <bits/stdc++.h>
using namespace std;
int n, e;
string s[1005];
bool b[1005][1005];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool bfs(int st_x, int st_y, int end_x, int end_y)
{
    queue<pair<int, int>> q;
    q.push({st_x, st_y});
    b[st_x][st_y] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == end_x && y == end_y)
        {
            return true;
        }
        for (int i = 0; i < 4; i++)
        {
            int nr = x + dx[i];
            int nc = y + dy[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < e)
            {
                if (!b[nr][nc] && (s[nr][nc] == '.' || s[nr][nc] == 'B'))
                {
                    b[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }
    return false;
}
void biplob_er_code()
{

    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    pair<int, int> st, end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (s[i][j] == 'A')
            {
                st = {i, j};
            }
            else if (s[i][j] == 'B')
            {
                end = {i, j};
            }
        }
    }
    memset(b, false, sizeof(b));
    if (bfs(st.first, st.second, end.first, end.second))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}
int main()
{
    biplob_er_code();
    return 0;
}
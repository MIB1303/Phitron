#include <bits/stdc++.h>
using namespace std;
int n, e;
string s[1005];
bool b[1005][1005];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y)
{

    b[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nr = x + dx[i];
        int nc = y + dy[i];

        if (nr >= 0 && nr < n && nc >= 0 && nc < e)
        {
            if (!b[nr][nc] && s[nr][nc] == '.')
            {
                dfs(nr, nc);
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ap = 0;
    memset(b, false, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (!b[i][j] && s[i][j] == '.')
            {
                dfs(i, j);
                ap++;
            }
        }
    }
    cout << ap << "\n";
    return 0;
}
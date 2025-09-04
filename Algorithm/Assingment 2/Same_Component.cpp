#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n, m;

bool flag = false;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

bool bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        if (par_i == di && par_j == dj)
        {
            return true;
        }

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    if (grid[si][sj] != '.' || grid[di][dj] != '.')
    {
        cout << "NO" << "\n";
        return 0;
    }
    if (si == di && sj == dj)
    {
        cout << "YES" << "\n";
        return 0;
    }
    memset(vis, false, sizeof(vis));

    if (bfs(si, sj, di, dj))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;

vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

bool bfs(int si, int sj, int &di, int &dj)
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

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                parent[ci][cj].first = par_i;
                parent[ci][cj].second = par_j;
                vis[ci][cj] = true;
                q.push({ci, cj});
                if (grid[ci][cj] == 'D')
                {
                    di = ci;
                    dj = cj;
                    return true;
                }
            }
        }
    }
    return false;
}
void mark_the_current_path(int di, int dj, int si, int sj)
{
    while (!(di == si && dj == sj))
    {
        int px = parent[di][dj].first;
        int py = parent[di][dj].second;

        if (grid[px][py] == '.')
        {
            grid[px][py] = 'X';
        }
        di = px;
        dj = py;
    }
}
int main()
{
    cin >> n >> m;
    int si, sj, di = -1, dj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    if (bfs(si, sj, di, dj))
    {
       mark_the_current_path(di, dj, si, sj);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}
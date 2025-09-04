#include <bits/stdc++.h>
using namespace std;
int t, n, m;
int ki, kj, qi, qj;
bool vis[1005][1005];

bool flag = false;

vector<pair<int, int>> d = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

int bfs()
{
    if (ki == qi && kj == qj)
    {
        return 0;
    }

    queue<pair<pair<int, int>, int>> q;
    q.push({{ki, kj}, 0});
    vis[ki][kj] = true;

    while (!q.empty())
    {
        pair<pair<int, int>, int> par = q.front();
        q.pop();
        int par_i = par.first.first;
        int par_j = par.first.second;
        int step = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                if (ci == qi && cj == qj)
                {
                    return step + 1;
                }
                vis[ci][cj] = true;
                q.push({{ci, cj}, step + 1});
            }
        }
    }
    return -1;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        cin >> ki >> kj;
        cin >> qi >> qj;
        memset(vis, false, sizeof(vis));
        cout << bfs() << "\n";
    }
    return 0;
}
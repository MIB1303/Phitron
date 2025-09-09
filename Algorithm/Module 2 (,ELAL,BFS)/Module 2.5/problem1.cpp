#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int par[1005];
void bfs(int sn)
{
    queue<int> q;
    q.push(sn);
    vis[sn] = true;
    level[sn] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int child : adj_list[x])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[x] + 1;
                par[child] = x;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int sn, dn;
        cin >> sn >> dn;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(par, -1, sizeof(par));
        bfs(sn);
        cout << level[dn] << endl;
    }
    return 0;
}
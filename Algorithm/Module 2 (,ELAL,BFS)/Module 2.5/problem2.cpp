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

    bfs(0);
    int lev;
    cin >> lev;
    for (int i = n; i >= 0; i--)
    {
        if (level[i] == lev)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// bfs(0);
// int lev;
// cin >> lev;
// for (int node : adj_list[10005])
// {
//     if (level[node] == lev)
//     {
//         cout << node << " ";
//     }
// }
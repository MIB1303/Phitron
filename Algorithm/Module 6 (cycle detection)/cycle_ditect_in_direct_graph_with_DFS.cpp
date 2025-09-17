#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
bool path_vis[105];
bool cycle = false;
void dfs(int sn)
{
    vis[sn] = true;
    path_vis[sn] = true;
    for (int child : adj_list[sn])
    {
        if (vis[child] && path_vis[child])
            cycle = true;
        if (!vis[child])
        {
            dfs(child);
        }
    }
    path_vis[sn] = false;
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
    }
    memset(vis, false, sizeof(vis));
    memset(path_vis,false, sizeof(path_vis));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
        cout << "Cycle Ditected" << endl;
    else
        cout << "No cycle";
    return 0;
}
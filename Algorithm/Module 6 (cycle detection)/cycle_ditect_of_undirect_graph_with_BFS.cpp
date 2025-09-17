#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
int parent[105];
bool cycle = false;
void dfs(int sn)
{
    vis[sn] = true;
    for (int child : adj_list[sn])
    {
        if (vis[child] && parent[sn] != child)
            cycle = true;
        if (!vis[child])
        {
            parent[child] = sn;
            dfs(child);
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
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
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
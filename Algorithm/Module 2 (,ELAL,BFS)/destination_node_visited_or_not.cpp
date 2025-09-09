#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void bfs(int s_n)
{
    queue<int> q;
    q.push(s_n);
    vis[s_n] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int child : adj_list[x])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
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
    memset(vis, false, sizeof(vis));
    int sorn, dn;
    cin >> sorn >> dn;
    bfs(sorn);
    if (!vis[dn])
        cout << "No";
    else
        cout << "Yes";
    return 0;
}
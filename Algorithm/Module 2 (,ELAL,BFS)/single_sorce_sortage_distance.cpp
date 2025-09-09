#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005] ;
void bfs(int sn)
{
    queue<int> q ;
    q.push(sn);
    vis[sn] = true ;
    level[sn] = 0 ;
    while (!q.empty())
    {
        int x = q.front() ;
        q.pop() ;
        for (int child : adj_list[x])
        {
            if (!vis[child])
            {
                q.push(child) ;
                vis[child] = true ;
                level[child] = level[x] + 1 ;
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
    int sn, dn;
    cin >> sn >> dn;
    memset(vis,false ,sizeof(vis)) ;
    memset(level,-1,sizeof(level)) ;
    bfs(sn);
    cout << level[dn];
    return 0;
}
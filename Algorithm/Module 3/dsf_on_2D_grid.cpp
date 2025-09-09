#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005];

void dfs(int si, int sj)
{
    //dfs code 
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}
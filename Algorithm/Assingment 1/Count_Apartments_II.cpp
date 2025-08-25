#include <bits/stdc++.h>
using namespace std;
int n, e;
string s[1005];
bool b[1005][1005];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

long long dfs(int x, int y)
{
    long long cnt = 0;
    stack<pair<int, int>> st;
    b[x][y] = true;
    st.push({x, y});

    while (!st.empty())
    {
        int x = st.top().first;
        int y = st.top().second;
        st.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {

            int nr = x + dx[i];
            int nc = y + dy[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < e)
            {
                if (!b[nr][nc] && s[nr][nc] == '.')
                {
                    b[nr][nc] = true;
                    st.push({nr, nc});
                }
            }
        }
    }
    return cnt;
}
int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<long long> ap_sz;
    memset(b, false, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (!b[i][j] && s[i][j] == '.')
            {
                long long sz = dfs(i, j);
                ap_sz.push_back(sz);
            }
        }
    }
    sort(ap_sz.begin(), ap_sz.end());

    if (ap_sz.empty())
    {
        cout << 0<<"\n";
    }
    else
    {
        for (size_t i = 0; i < ap_sz.size(); i++)
        {
            cout << ap_sz[i];
            if (i != ap_sz.size() - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
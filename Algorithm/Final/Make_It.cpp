    #include <bits/stdc++.h>
    using namespace std;
    bool vis[100005];
    bool canGO(int src)
    {
        if (src == 1)
        {
            return true;
        }

        queue<int> q;
        q.push(1);
        vis[1] = true;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            int add = curr + 3;
            int mul = curr * 2;

            if (add == src || mul == src)
            {
                return true;
            }
            if (add <= src && !vis[add])
            {
                q.push(add);
                vis[add] = true;
            }
            if (mul <= src && !vis[mul])
            {
                q.push(mul);
                vis[mul] = true;
            }
        }
        return false;
    }
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            memset(vis, false, sizeof(vis));
            if (canGO(n))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        return 0;
    }


// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
void solve_by_MIB1303()
{
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
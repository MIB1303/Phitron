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
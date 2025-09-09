#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b;
    long long c;
    Edge(int x, int y, long long z)
    {
        a = x;
        b = y;
        c = z;
    }
};
long long dis[1005];
int n, e;
vector<Edge> edge_list;
long long IF = LLONG_MAX;
bool Bellman_Ford(int s)
{
    dis[s] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b;
            long long c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != IF && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edge_list)
    {
        int a, b;
        long long c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != IF && dis[a] + c < dis[b])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    cin >> n >> e;

    while (e--)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = IF;
    }
    int s;
    cin >> s;

    bool b = Bellman_Ford(s);
    if (!b)
    {
        cout << "Negative Cycle Detected\n";
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            if (d < 1 || d > n || dis[d] == IF)
            {
                cout << "Not Possible\n";
            }
            else
            {
                cout << dis[d] << "\n";
            }
        }
    }

    return 0;
}
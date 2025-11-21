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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << nl;
                continue;
            }

            map<int, char> n2l;
            map<char, int> l2n;
            bool flag = false;
            for (int k = 0; k < n; k++)
            {
                int num = a[k];
                char let = s[k];

                if (n2l.count(num))
                {
                    if (n2l[num] != let)
                    {
                        flag = true;
                        break;
                    }
                }
                if (l2n.count(let))
                {
                    if (l2n[let] != num)
                    {
                        flag = true;
                        break;
                    }
                }
                n2l[num] = let;
                l2n[let] = num;
            }
            if (flag)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
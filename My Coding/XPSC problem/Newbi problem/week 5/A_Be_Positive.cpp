#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt0 = 0, cntneg = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                cnt0++;
            else if (x == -1)
                cntneg++;
        }
        int ans = cnt0 + 2 * (cntneg % 2);
        cout << ans << "\n";
    }
    return 0;
}

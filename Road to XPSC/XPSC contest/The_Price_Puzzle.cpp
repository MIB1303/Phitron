#include <bits/stdc++.h>
using namespace std;

const int MAX_SUM = 200000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    vector<bool> possible(MAX_SUM + 1, false);
    possible[0] = true;

    for (int x : a)
    {
        for (int i = MAX_SUM - x; i >= 0; --i)
        {
            if (possible[i])
            {
                possible[i + x] = true;
            }
        }
    }

    vector<int> prefix(MAX_SUM + 1, 0);
    for (int i = 1; i <= MAX_SUM; ++i)
    {
        prefix[i] = prefix[i - 1] + (possible[i] ? 1 : 0);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int L, R;
        cin >> L >> R;
        L = max(L, 0);
        R = min(R, MAX_SUM);
        if (L > R)
            cout << "0\n";
        else
            cout << prefix[R] - (L > 0 ? prefix[L - 1] : 0) << '\n';
    }
    return 0;
}

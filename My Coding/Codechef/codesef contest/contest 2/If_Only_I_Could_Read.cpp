#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int &x : A)
            cin >> x;

        bool found = false;
        for (int l = 0; l < N && !found; ++l)
        {
            for (int r = l + 1; r < N && !found; r += 2)
            { // only even length
                int len = r - l + 1;
                vector<int> sub(A.begin() + l, A.begin() + r + 1);

                int chef_median = sub[len / 2]; // Chef's definition

                vector<int> sorted_sub = sub;
                sort(sorted_sub.begin(), sorted_sub.end());

                int true_median = sorted_sub[len / 2 - 1]; // True definition

                if (chef_median != true_median)
                {
                    cout << l + 1 << " " << r + 1 << '\n'; // 1-based index
                    found = true;
                }
            }
        }

        if (!found)
            cout << -1 << '\n';
    }

    return 0;
}

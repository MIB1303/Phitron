#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        unordered_map<int, int> freq;
        int freq1 = 0, max_other = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        freq1 = freq[1];
        for (auto &p : freq)
            if (p.first != 1)
                max_other = max(max_other, p.second);

        int option1 = n - freq1;
        int option2 = (n - max_other) + 1;

        cout << min(option1, option2) << "\n";
    }
    return 0;
}

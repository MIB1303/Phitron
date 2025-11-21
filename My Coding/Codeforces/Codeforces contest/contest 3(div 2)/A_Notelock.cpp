#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        vector<bool> pp(n, false);

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                bool h_o = false;
                for (int j = max(0, i - k + 1); j < i; ++j)
                {
                    if (s[j] == '1')
                    {
                        h_o = true;
                        break;
                    }
                }

                if (!h_o)
                {
                    pp[i] = true;
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

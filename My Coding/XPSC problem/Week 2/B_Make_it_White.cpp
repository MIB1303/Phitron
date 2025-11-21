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
        string s;
        cin >> s;
        int fb = -1, lb = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (fb == -1)
                {
                    fb = i;
                }
                lb = i;
            }
        }
        if (fb == -1 && lb == -1)
            cout << 0 << endl;
        else
            cout << lb - fb + 1 << endl;
    }
    return 0;
}
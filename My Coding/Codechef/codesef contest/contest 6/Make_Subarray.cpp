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
        int count = 0;
        int first1 = -1;
        int last1 = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (first1 == -1)
                    first1 = i;
                last1 = i;
            }
        }
        if (first1 == last1 || first1 == -1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = first1; i <= last1; i++)

        {
            if (s[i] == '0')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
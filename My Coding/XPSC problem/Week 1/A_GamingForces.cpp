#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count1 = 0;
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (v[i] == 1)
                count1++;
        }
        if (count1 <= 1)
            cout << v.size() << endl;
        else
            cout << v.size() - count1/ 2 << endl;
    }

    return 0;
}



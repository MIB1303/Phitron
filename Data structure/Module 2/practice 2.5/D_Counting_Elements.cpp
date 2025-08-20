#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i] + 1)
            {
                found = 1;
                break;
            }
            else if (v[j] > v[i] + 1)
            {
                break;
            }
        }

        if (found)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}

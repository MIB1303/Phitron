#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int l = j; l < n; l++)
        {
            sum += s[l];
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
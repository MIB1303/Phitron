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
    int flag = 0;
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            cout << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << -1;
    return 0;
}
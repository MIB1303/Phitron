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
        cout << (n * k) / 60 << " " << (n * k) % 60 << endl;
    }
    return 0;
}
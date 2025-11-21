#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>> n ;
        int sum = 1;
        for (int i = 1; i <= n; i++)
        {
            sum *= i;
        }

        if (sum < 10)
            cout << sum << endl;
        else if(sum>=10)
            cout << sum % 10 << endl;
    }

    return 0;
}
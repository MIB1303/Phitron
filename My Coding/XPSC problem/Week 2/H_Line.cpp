#include<bits/stdc++.h>
using namespace std;
#define rall(x) (x).rbegin(), (x).rend()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
 
        long long b = 0;
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                b += i;
                a[i] = (n - i - 1) - i;
            }
            else
            {
                b += (n - i - 1);
                a[i] = i - (n - i - 1);
            }
        }
        sort(rall(a));
 
        vector<long long> r(n);
        long long curr = b;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > 0)
            {
                curr += a[j];
            }
            r[j] = curr;
        }
        for (int k = 0; k < n; k++)
        {
            cout << " " << r[k];
        }
        cout << endl;
    }

    return 0;
}
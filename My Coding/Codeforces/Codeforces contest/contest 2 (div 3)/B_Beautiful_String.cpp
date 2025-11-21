// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (isPalindrome(s))
        {
            cout << 0 << "\n";
            continue;
        }

       
        bool found = false;

       
        for (int i = 1; i <= n && !found; i++)
        {
            string x = s.substr(i);
            if (isPalindrome(x))
            {
                cout << i << "\n";
                for (int k = 1; k <= i; k++)
                    cout << k << (k == i ? '\n' : ' ');
                found = true;
            }
        }

     
        for (int i = 0; i < n && !found; i++)
        {
            string x = s.substr(0, i);
            if (isPalindrome(x))
            {
                cout << (n - i) << "\n";
                for (int k = i + 1; k <= n; k++)
                    cout << k << (k == n ? '\n' : ' ');
                found = true;
            }
        }

        if (!found)
        {
         
            cout << n << "\n";
            for (int i = 1; i <= n; i++)
                cout << i << (i == n ? '\n' : ' ');
        }
    }
}

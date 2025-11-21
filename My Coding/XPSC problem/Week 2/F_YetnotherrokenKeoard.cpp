#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int main()
{
    
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string s1 = "";
        int l = 0, h = 0;
 
        for (int i = s.size() - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (ch == 'b')
            {
                l++;
            }
            else if (ch == 'B')
            {
                h++;
            }
            else
            {
                if (ch >= 'a' && ch <= 'z')
                {
                    if (l > 0)
                    {
                        l--;
                    }
                    else
                    {
                        s1 += ch;
                    }
                }
                else if (ch >= 'A' && ch <= 'Z')
                {
                    if (h > 0)
                    {
                        h--;
                    }
                    else
                    {
                        s1 += ch;
                    }
                }
            }
        }
        reverse(all(s1));
        cout << s1 << endl;
    }

    return 0;
}
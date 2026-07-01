#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int mt = -1;
        string s1 = "";
 
        for (int i = 0; i <= s.size(); i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string tmp = s;
                tmp.insert(tmp.begin() + i, c);
 
                int time = 2;
                for (int j = 1; j < tmp.size(); j++)
                {
                    if (tmp[j] == tmp[j - 1])
                    {
                        time += 1;
                    }
                    else
                    {
                        time += 2;
                    }
                }
                if (time > mt)
                {
                    mt = time;
                    s1 = tmp;
                }
            }
        }
        cout << s1 << endl;
    }
}

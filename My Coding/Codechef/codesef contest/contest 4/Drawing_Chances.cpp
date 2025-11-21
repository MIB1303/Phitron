// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int tm, mh;
//         cin >> tm >> mh;
//         string s;
//         int flag = 0;
//         int count0 = 0;
//         int count1 = 0;
//         cin >> s;
//         vector<int> v;
//         for (int i = 0; i < s.size(); i++)
//         {
//             v[i] = s[i];
//             if (tm % 2 == 0)
//             {
//                 if (v[i] == 1)
//                     count1++;
//                 else
//                     count0++;
//                     if (count1 > tm % 2 || count0 > tm / 2)
//                     flag = 1;
//             }
//             else
//             {
//                 flag = 1;
//             }
//         }
//         if (flag==0)
//         cout<<"Yes" << endl;
//         else cout<<"No";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tm, mh;
        cin >> tm >> mh;
        string s;
        cin >> s;
        int flag = 0;
        int count0 = 0;
        int count1 = 0;
        if (tm % 2 != 0)
        {
            flag = 1;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                int bit = s[i] - '0';
                if (bit == 1)
                    count1++;
                else
                    count0++;
                if (count1 > tm / 2 || count0 > tm / 2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "Yes" << endl;  
        else
            cout << "No" << endl;
    }
    return 0;
}

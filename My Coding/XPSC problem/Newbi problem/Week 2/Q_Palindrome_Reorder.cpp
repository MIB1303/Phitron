// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define all(x)   (x).begin(), (x).end()
#define sz(x)    (x).size()
#define nl endl
void solve_by_MIB1303()
{
    string s;
    cin >> s;
    int n = sz(s);
    map <char,int> mp;
    for(int c: s) mp[c]++;

    bool taken = false;
    
    for(auto [x,y] : mp)
    {
        if(y%2==1)
        {
            if(n%2==1)
            {
                if(!taken) taken = true;
                else
                {
                    cout << "NO SOLUTION" << nl;
                    return;
                }
            }
            else
            {
                cout << "NO SOLUTION" << nl;
                return;
            }

        }

    }

    string tt;

    string pref = "";
    for(auto [x,y] : mp)
    {
        int k = y/2;
        while(k--)
        {
            pref.push_back(x);
        }
        if(y%2==1) tt = x;
    }
    // cout << tt << nl;
    string suff = pref;
    reverse(all(suff));

    if(n%2==0)
    {
        cout << pref + suff << nl;
    }
    else
    {
        cout << pref + tt + suff << nl;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// #define ll       long long
// #define nl       '\n'
// #define sz(x)    (x).size()
// #define arrsz(x) (sizeof(x) / sizeof(x[0]))
// #define all(x)   (x).begin(), (x).end()
// #define rall(x)  (x).rbegin(), (x).rend()
// #define HA       cout << "YES" << nl
// #define NA       cout << "NO" << nl

// const int MOD = 1e9 + 7;
// const int MAXN = 1e6 + 5;
// const long long INF = 1e9;
// const ll NEG_INF = -4e18;


// void sayedErSolve(int tc)
// {
//     string s;
//     cin >> s;
//     int n = sz(s);
//     map <char,int> mp;
//     for(int c: s) mp[c]++;

//     bool taken = false;
    
//     for(auto [x,y] : mp)
//     {
//         if(y%2==1)
//         {
//             if(n%2==1)
//             {
//                 if(!taken) taken = true;
//                 else
//                 {
//                     cout << "NO SOLUTION" << nl;
//                     return;
//                 }
//             }
//             else
//             {
//                 cout << "NO SOLUTION" << nl;
//                 return;
//             }

//         }

//     }

//     string tt;

//     string pref = "";
//     for(auto [x,y] : mp)
//     {
//         int k = y/2;
//         while(k--)
//         {
//             pref.push_back(x);
//         }
//         if(y%2==1) tt = x;
//     }
//     // cout << tt << nl;
//     string suff = pref;
//     reverse(all(suff));

//     if(n%2==0)
//     {
//         cout << pref + suff << nl;
//     }
//     else
//     {
//         cout << pref + tt + suff << nl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t=1;
//     // cin >> t;
//     for (int tc = 1; tc <= t; tc++)
//     {
//         // cout << t << nl;
//         sayedErSolve(tc);
//     }
//     return 0;
// }
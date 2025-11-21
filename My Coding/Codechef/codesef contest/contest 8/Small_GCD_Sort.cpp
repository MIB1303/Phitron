// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
int gcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> pl;
        for (int i = 1; i <= N; ++i)
        {
            int g = gcd(i, N);
            pl.push_back({-g, i});
        }
        sort(pl.begin(), pl.end());
        for (auto p : pl)
        {
            cout << p.second << " ";
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     vector<pair<int, int>> players;

//     for (int i = 1; i <= N; ++i)
//     {
//         int g = gcd(i, N);
//         players.push_back({-g, i});
//     }

//     sort(players.begin(), players.end());

//

//     return 0;
// }

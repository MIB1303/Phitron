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
void solve_by_MIB1303()
{
     int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int c01 = 0, c10 = 0;

       
        for (int i = 0; i < N - 1; ++i)
        {
            if (S[i] == '0' && S[i + 1] == '1')
                c01++;
            else if (S[i] == '1' && S[i + 1] == '0')
                c10++;
        }

        
        if (c01 == c10 && c01 > 0)
        {
            cout << "Alice\n";
        }
        else if (min(c01, c10) > 0 && S[0] != S[N - 1])
        {
            cout << "Alice\n";
        }
        
        else
        {
            cout << "Bob\n";
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
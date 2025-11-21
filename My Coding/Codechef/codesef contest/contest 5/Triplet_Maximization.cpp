#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;

        int t_g = (X + Y) / 3;
        int twos_used = min(Y, t_g);
        int score = twos_used * 2 + (t_g - twos_used);

        cout << score << endl;
    }
}
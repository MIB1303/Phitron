#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int scrn = y / 2;
        int baki = scrn * 7;
        if (y % 2 != 0)
        {
            scrn++;
            baki += 11;
        }
        if (x > baki)
        {
            x -= baki;
            scrn += x / 15;
            if (x % 15 != 0)
                scrn++;
        }
        cout << scrn << endl;
    }
    return 0;
}
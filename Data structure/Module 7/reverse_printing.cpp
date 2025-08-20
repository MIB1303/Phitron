#include <bits/stdc++.h>
using namespace std;
void rec(int i, int x)
{
    if (i > x)
    {
        return;
    }
    rec(i + 1, x);
    cout << i << " " << endl;
}
int main()
{
    int x = 3;
    rec(1, x);
    return 0;
}
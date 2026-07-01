#include <bits/stdc++.h>
using namespace std;
int read()
{ // 读int
    int x = 0;
    char c = getchar();
    int a = 1;
    while (c < '0' || c > '9')
        if (c == '-')
            a = -1, c = getchar();
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * a;
}

int a[105], b[105], tim[105], t, n;
int main()
{
    t = read();
    while (t--)
    {
        n = read();
        for (int i = 1; i <= n; i++)
            a[i] = read(), b[i] = read();
        for (int i = 1; i <= n; i++)
            tim[i] = read();
        int now = 0;
        for (int i = 1; i <= n; i++)
        {
            now += a[i] - b[i - 1] + tim[i];
            if (i != n)
            {
                now = max(now + (b[i] - a[i] + 1) / 2, b[i]);
            }
        }
        cout << now << '\n';
    }
    return 0;
}
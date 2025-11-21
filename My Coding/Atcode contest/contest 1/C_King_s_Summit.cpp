#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long minR = LLONG_MAX, maxR = LLONG_MIN;
    long long minC = LLONG_MAX, maxC = LLONG_MIN;

    for (int i = 0; i < N; i++)
    {
        long long r, c;
        cin >> r >> c;
        minR = min(minR, r);
        maxR = max(maxR, r);
        minC = min(minC, c);
        maxC = max(maxC, c);
    }

    long long rowDiff = maxR - minR;
    long long colDiff = maxC - minC;

    long long ans = max(rowDiff, colDiff);
    cout << (ans + 1) / 2 << "\n";

    return 0;
}

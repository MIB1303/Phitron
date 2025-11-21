#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    long long N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    vector<int> dif(N + 1, 0);

    for (long long i = 0; i < M; i++)
    {
        long long L, R;
        cin >> L >> R;
        L--;
        R--;
        dif[L] ^= 1;
        dif[R + 1] ^= 1;
    }

    int flag = 0;
    for (long long i = 0; i < N; i++)
    {
        flag ^= dif[i];
        if (flag)
            swap(S[i], T[i]);
    }

    cout << S << "\n";
    return 0;
}

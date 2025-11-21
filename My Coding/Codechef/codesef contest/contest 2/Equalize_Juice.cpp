#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        long long S = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            S += A[i];
        }

        int best = 1;
        long long cur = 0;
        for (int i = 0; i < N; i++) {
            cur += A[i];
            if (cur == 0) continue;
            if (S % cur != 0) continue;
            if (cur > S) break;

            long long target = cur;
            long long tmp = 0;
            int blocks = 0;
            bool ok = true;
            for (int j = 0; j < N; j++) {
                tmp += A[j];
                if (tmp > target) { ok = false; break; }
                if (tmp == target) { blocks++; tmp = 0; }
            }
            if (ok && tmp == 0) best = max(best, blocks);
        }

        cout << (N - best) << "\n";
    }
    return 0;
}

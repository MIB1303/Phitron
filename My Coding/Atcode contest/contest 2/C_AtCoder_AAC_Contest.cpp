#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int na, nb, nc;
        cin >> na >> nb >> nc;
        long long total = na + nb + nc;
        int ans = min({na, nc, total / 3});
        cout << ans << endl;
    }
    return 0;
}

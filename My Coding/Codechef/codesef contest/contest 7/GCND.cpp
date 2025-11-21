// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//     }

//     return 0;
// }


















#include <bits/stdc++.h>
using namespace std;

int gcnd(int x, int y) {
    int m = min(x, y);
    for (int z = m - 1; z >= 1; z--) {
        if (x % z != 0 && y % z != 0)
            return z;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = max(ans, gcnd(a[i], a[j]));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

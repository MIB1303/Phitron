// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     vector<int> p_sum(n);

//     p_sum[0] = v[0];

//     for (int i = 1; i <= n; i++)
//     {
//         p_sum[i] = p_sum[i - 1] + v[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << p_sum[i] << " ";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;


vector<int> calculatePrefixSum(const vector<int>& v) {
    int n = v.size();
    vector<int> p_sum(n);
    p_sum[0] = v[0];

    for (int i = 1; i < n; i++) {
        p_sum[i] = p_sum[i - 1] + v[i];
    }

    return p_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> p_sum = calculatePrefixSum(v);

    for (int i = 0; i < n; i++) {
        cout << p_sum[i] << " ";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int i = 0, j = n - 1;
        int l = 0, r = 0;
        long long max_height = 0;
        int max_width = 0;

        while (i < j)
        {
            int height = min(h[i], h[j]);
            int width = j - i;

            if (height > max_height || (height == max_height && width > max_width))
            {
                max_height = height;
                max_width = width;
                l = i;
                r = j;
            }
            if (h[i] < h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        cout << l << " " << r << "\n";
    }
    return 0;
}
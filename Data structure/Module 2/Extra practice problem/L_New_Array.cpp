#include <bits/stdc++.h>
using namespace std;

vector<int> concatVectors(const vector<int> &v1, const vector<int> &v2)
{
    vector<int> result = v1;
    result.insert(result.end(), v2.begin(), v2.end());
    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> c = concatVectors(b, a);

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;
}

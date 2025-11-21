#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[20];
        bool used[20];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            used[i] = false;
        }

        int score = 0;

        for (int i = 0; i < n; ++i)
        {
            if (used[i])
                continue;
            for (int j = i + 1; j < n; ++j)
            {
                if (!used[j] && a[i] == a[j])
                {
                    used[i] = true;
                    used[j] = true;
                    score++;
                    break;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}

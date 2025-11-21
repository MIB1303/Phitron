#include <bits/stdc++.h>
using namespace std;

struct Point
{
    long long x, y;
};

bool onLine(long long a, long long b, long long c, Point p)
{
    return (a * p.x + b * p.y + c == 0);
}

int main()
{

    int N;
    cin >> N;
    vector<Point> pts(N);
    for (int i = 0; i < N; i++)
    {
        cin >> pts[i].x >> pts[i].y;
    }

    int need = (N + 1) / 2;

    for (int base = 0; base < 2; base++)
    {
        for (int j = base + 1; j < N; j++)
        {
            long long x1 = pts[base].x, y1 = pts[base].y;
            long long x2 = pts[j].x, y2 = pts[j].y;

            long long a = y1 - y2;
            long long b = x2 - x1;
            long long c = x1 * y2 - x2 * y1;

            int cnt = 0;
            for (int k = 0; k < N; k++)
            {
                if (onLine(a, b, c, pts[k]))
                    cnt++;
            }

            if (cnt >= need)
            {
                cout<< "Yes" << endl;
                cout << a << " " << b << " " << c << "\n";
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

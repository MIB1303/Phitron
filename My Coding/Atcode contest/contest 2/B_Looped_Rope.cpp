#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);

    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
    }

    int dx[] = {-1, 1, 0, 0};

    int dy[] = {0, 0, -1, 1};

    bool ok = true;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] == '#')
            {
                int black_neighbors = 0;
                for (int k = 0; k < 4; k++)
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#')
                    {
                        black_neighbors++;
                    }
                }
                if (black_neighbors != 2 && black_neighbors != 4)
                {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
            break;
    }

    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}

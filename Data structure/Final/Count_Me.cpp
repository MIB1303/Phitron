#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string line;
        getline(cin, line);

        stringstream word(line);
        string token;
        map<string, int> freq;
        string common;
        int count = 0;

        while (word >> token)
        {
            freq[token]++;
            if (freq[token] > count)
            {
                count = freq[token];
                common = token;
            }
        }

        cout << common << " " << count << "\n";
    }

    return 0;
}

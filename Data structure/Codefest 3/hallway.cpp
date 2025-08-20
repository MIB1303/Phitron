#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin >> q;

    deque<string> qe;
    while (q--)
    {
        string s;
        cin >> s;

        if (s == "ARRIVE")
        {
            string name;
            cin >> name;
            qe.push_back(name);
        }
        else if (s == "SERVE")
        {
            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                qe.pop_front();
            }
        }
        else if (s == "FIRST")
        {
            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                cout << qe.front() << "\n";
            }
        }
        else if (s == "LAST")
        {
            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                cout << qe.back() << "\n";
            }
        }
        else if (s == "SHOW")
        {
            if (qe.empty())
            {
                cout << "No patients" << "\n";
            }
            else
            {
                for (const auto &it : qe)
                {
                    cout << it << ' ';
                }
                cout << "\n";
            }
        }
        else if (s == "COUNT")
        {
            cout << qe.size() << "\n";
        }
    }
    return 0;
}
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
        if (n == 2)
            cout << 4 << endl;
        else if (n == 3)
            cout << 5 << endl;
        else 
        {
            int pay_money = (n / 3)*5 ;
            int baki = (n % 3);
            pay_money = ((n / 3)*5) + ((n % 3)*2);
            cout<< pay_money << endl ;
        }
    }
    return 0;
}



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
        if (n == 2) cout << 4 << endl;
        else if (n == 3) cout << 5 << endl;
        else
        {
            if (n % 3 == 0)
                cout << (n / 3) * 5 << endl;
            else if (n % 3 == 1)
                cout << (n / 3 - 1) * 5 + 8 << endl;
            else // n % 3 == 2
                cout << (n / 3) * 5 + 4 << endl;
        }
    }
    return 0;
}

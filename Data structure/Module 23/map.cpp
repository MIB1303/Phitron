#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["hamim"] = 3;     // complexity log(N)
    mp["samim"]=56489;

    for (auto it = mp.begin(); it != mp.end(); it++)   //O(NlogN)
    {
        cout << (*it).first << " " << it->second << endl;  //logN
    }
    if (mp.count("biplob"))
    {
        cout<< "ase";
    }
    else cout<< "nai";
    return 0;
}
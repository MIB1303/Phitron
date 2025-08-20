#include<bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    cout << "In fun : " << *p << endl;
}
int main()
{
    int x=10;
    int *p;
    p=&x;
    fun (p);
    cout << "In main : " << *p << endl;
    return 0;
}
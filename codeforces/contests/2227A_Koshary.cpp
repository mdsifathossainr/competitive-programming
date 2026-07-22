/*
    Problem: Codeforces Codeforces 2227A - Koshary
    Link: https://codeforces.com/contest/2227/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a ,b;
        cin >> a >> b;
        if(a%2 == 0 || b%2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
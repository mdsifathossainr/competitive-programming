/*
Problem: A. Odd One Out
Link: https://codeforces.com/problemset/problem/1915/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << c << endl;
        else if (a == c)
            cout << b << endl;
        else
            cout << a << endl;
    }
}
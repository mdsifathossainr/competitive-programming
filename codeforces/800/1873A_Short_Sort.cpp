/*
Problem: Codeforces 1873A - Short Sort
Link: https://codeforces.com/problemset/problem/1873/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "abc" || s == "cba" || s == "bac" || s == "acb")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
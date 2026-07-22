/*
    Problem: Codeforces 2227B - Party Monster
    Link: https://codeforces.com/contest/2227/problem/B
*/

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
        string s;
        cin >> s;
        int a = 0;
        int b = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                a++;
            else
                b++;
        }

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
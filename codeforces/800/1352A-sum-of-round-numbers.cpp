/*
Problem: Codeforces 1352A - Sum of Round Numbers
Link: https://codeforces.com/problemset/problem/1352/A
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

        vector<long long int> v;

        long long p = 1;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                v.push_back((s[i] - '0') * p);
            }

            p *= 10;
        }

        cout << v.size() << endl;
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
/*
Problem: Codeforces 339A - Helpful Maths
Link: https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string s2;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            s2.push_back(s[i]);
        }
    }

    sort(s2.begin(), s2.end());

    for (int i = 0; i < s2.size(); i++)
    {
        if (i == s2.size() - 1)
        {
            cout << s2[i];
        }
        else
        {
            cout << s2[i] << "+";
        }
    }
    return 0;
}
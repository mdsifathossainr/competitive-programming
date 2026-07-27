/*
Problem: Codeforces 1829A - Love Story
Link: https://codeforces.com/problemset/problem/1829/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string s2;
        cin >> s2;

        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != s2[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
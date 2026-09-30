// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    set<char> v;

    for (char x : s)
    {
        v.insert(x);
    }

    if (v.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string digits;

    for (char x : s)
    {
        if (x != '+')
            digits.push_back(x);
    }

    for (int i = 0; i < digits.size(); i++)
    {
        if (i == digits.size() - 1)
            cout << digits[i];
        else
            cout << digits[i] << "+";
    }

    return 0;
}
// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int upperCase = 0;
    int lowerCase = 0;

    for (char x : s)
    {
        if (x >= 'A' && x <= 'Z')
            upperCase++;
        else
            lowerCase++;
    }

    for (char x : s)
    {
        if (lowerCase >= upperCase)
        {
            cout << char(tolower(x));
        }
        else
        {
            cout << char(toupper(x));
        }
    }
    return 0;
}
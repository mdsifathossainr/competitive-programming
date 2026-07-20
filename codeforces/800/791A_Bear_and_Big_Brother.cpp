/*
    Problem: Codeforces 791A - Bear and Big Brother
    Link: https://codeforces.com/problemset/problem/791/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;

    while (true)
    {
        if (a > b)
        {
            break;
        }
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
}
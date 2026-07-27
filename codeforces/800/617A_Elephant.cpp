/*
Problem: Codeforces 617A - Elephant
Link: https://codeforces.com/problemset/problem/617/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int steps = 0;
    if (n % 5 == 0)
    {
        steps = n / 5;
        cout << steps << endl;
    }
    else
    {
        steps = (n / 5) + 1;
        cout << steps << endl;
    }

    return 0;
}
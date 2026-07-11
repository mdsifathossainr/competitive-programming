/*
Problem: Codeforces 151A - Soft Drinking
Link: https://codeforces.com/problemset/problem/151/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int drinkToasts = totalDrink / nl;
    int limeToasts = c * d;
    int saltToasts = p / np;

    cout << min({drinkToasts, limeToasts, saltToasts}) / n << endl;

    return 0;
}
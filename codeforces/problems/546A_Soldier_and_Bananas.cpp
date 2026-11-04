// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;

    for (int i = 1; i <= w; i++)
    {
        totalCost += k * i;
    }

    if (totalCost > n)
        cout << totalCost - n;
    else
        cout << 0;

    return 0;
}
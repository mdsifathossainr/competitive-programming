// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int solve = 0;

    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
            solve++;
    }
    cout << solve << endl;
    return 0;
}
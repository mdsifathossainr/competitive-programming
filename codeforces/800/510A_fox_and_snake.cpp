/*
Problem: Codeforces 510A - Fox And Snake
Link: https://codeforces.com/problemset/problem/510/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a = 2;
    int b = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            else if (j == m && i == a)
            {
                cout << "#";
                a += 4;
            }
            else if (j == 1 && i == b)
            {
                cout << "#";
                b += 4;
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
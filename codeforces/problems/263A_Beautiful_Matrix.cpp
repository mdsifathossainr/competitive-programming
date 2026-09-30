// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                a = i;
                b = j;
                break;
            }
        }
    }

    cout << abs(a - 3) + abs(b - 3) << endl;

    return 0;
}
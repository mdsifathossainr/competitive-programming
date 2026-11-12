// https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int free = 0;

    while(n--)
    {
        int p , q;
        cin >> p >> q;

        if(p <= q-2)
        {
            free++;
        }
    }

    cout << free << endl;
    return 0;
}
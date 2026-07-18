/*
Problem: Codeforces 427A - Police Recruits
Link: https://codeforces.com/contest/427/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int police = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            police += v[i];
        }
        else
        {
            if (police > 0)
                police--;
            else
                untreated++;
        }
    }
    cout << untreated << endl;

    return 0;
}
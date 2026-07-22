/*
    Problem: Codeforces 381A - Sereja and Dima
    Link: https://codeforces.com/problemset/problem/381/A

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
    int sereja = 0;
    int dima = 0;

    int left = 0;
    int right = n - 1;

    int value;
    for (int i = 1; i <= n; i++)
    {
        if (v[left] > v[right])
        {
            value = v[left];
            left++;
        }
        else
        {
            value = v[right];
            right--;
        }
        if (i % 2 != 0)
        {
            sereja += value;
        }
        else
        {
            dima += value;
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}
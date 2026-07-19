/*
Problem: Codeforces 144A - Arrival of the General
Link: https://codeforces.com/problemset/problem/144/A
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

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mx)
        {
            maxIndex = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mn)
        {
            minIndex = i;
        }
    }

    int result = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex)
        result--;

    cout << result << endl;

    return 0;
}
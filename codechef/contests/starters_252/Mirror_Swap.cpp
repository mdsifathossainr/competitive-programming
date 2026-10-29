// https://www.codechef.com/problems/MRSWAP

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(2 * n + 1);

        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> v[i];
        }

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += max(v[i], v[2 * n + 1 - i]);
        }
        cout << sum << endl;
    }
    return 0;
}
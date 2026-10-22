// https://www.codechef.com/problems/CHANGEONE7

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 2) cout << "0" << endl;
        else
        {
            sort(v.begin(), v.end());

            int sum1 = v[v.size() - 2] - v[0];
            int sum2 = v[v.size() - 1] - v[1];

            cout << min(sum1, sum2) << endl;
        }
    }
    return 0;
}
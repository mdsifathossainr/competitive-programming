// https://www.codechef.com/problems/ODDEVEN7

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

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == odd)
        {
            cout << 2 * even << endl;
        }
        else if (even > odd)
        {
            cout << 2 * odd + 1 << endl;
        }
        else
        {
            cout << 2 * even + 1 << endl;
        }
    }
    return 0;
}
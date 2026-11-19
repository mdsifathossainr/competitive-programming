// https://www.codechef.com/problems/HALFPIE

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

        int l = 0;
        int r = 1;

        int mx = 0;

        while (r < n)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                
                if (i == l || i == r)
                {
                    sum += (v[i] / 2);
                }
                else
                {
                    sum += v[i];
                }
            }

            if(sum > mx) mx = sum;

            l++;
            r++;
        }

        cout << mx << endl;
    }

    return 0;
}
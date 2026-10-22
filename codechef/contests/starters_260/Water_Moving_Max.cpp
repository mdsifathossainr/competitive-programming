// https://www.codechef.com/problems/WATERMOVE2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end(),greater<int>());

        int operation = min(n,k+1);

        int sum = 0;

        for(int i=0 ; i< operation ; i++)
        {
            sum += v[i];
        }

        cout << sum << "\n";
    }
    return 0;
}
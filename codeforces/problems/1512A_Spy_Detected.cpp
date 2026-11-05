// https://codeforces.com/contest/1512/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int>v(n);

        for(int i=0 ; i<n ; i++)
        {
            cin >> v[i];
        }

        int value = 0;

        if(v[0] == v[1] || v[0] == v[2])
        {
            value = v[0];
        }
        else
        {
            value = v[1];
        }

        for(int i=0 ; i<n ; i++)
        {
            if(v[i] != value)
            {
                cout << i+1 << "\n";
            }
        }

    }
    return 0;
}
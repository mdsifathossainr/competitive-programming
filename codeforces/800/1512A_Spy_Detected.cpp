/*
Problem: Codeforces 1512A - Spy Detected!
Link: https://codeforces.com/problemset/problem/1512/A
*/

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
        vector<int>v(n+1);
        for(int i=1 ; i<=n ; i++)
        {
            cin >> v[i];
        }
        if(v[1] != v[2] && v[1] != v[3]) cout << "1" << endl;
        else if(v[n]!= v[n-1] && v[n] != v[n-2]) cout << n << endl;
        else
        {
            for(int i=2 ; i<n ; i++)
            {
                if(v[i] != v[i-1] && v[i] != v[i+1])
                {
                    cout << i << endl;
                    break;
                } 
    
            }
        }
    }

    return 0;
}
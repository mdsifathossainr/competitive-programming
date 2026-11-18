// https://codeforces.com/contest/2218/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) 
    {
        vector<int>v(7);
        for(int i=0 ; i<7 ; i++)
        {
            cin >> v[i];
        }

        int max = INT_MIN;
        
        for(int i=0 ; i<7 ; i++)
        {
            if(max < v[i])
            {
                max = v[i];
            }

        }
        int sum = 0;

        for(int i=0 ; i<7 ; i++)
        {
            sum = sum - v[i];
        }

        sum = sum + 2* max;
        cout << sum << endl;
    }
    return 0;
}
// https://codeforces.com/contest/2290/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int>v(3);

        for(int i=0 ; i<3 ; i++)
        {
            cin >> v[i];
        }
         
        sort(v.begin() ,v.end());

        v[0] ++;
        v[2] --;

        if(v[0] == v[1] && v[0] == v[2] && v[1] == v[2]) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        
    }
    return 0;
}
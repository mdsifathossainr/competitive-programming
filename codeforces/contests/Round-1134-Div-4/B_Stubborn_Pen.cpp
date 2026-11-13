// https://codeforces.com/contest/2290/problem/B

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
        string s;
        cin >> s;

        int count = 0;

        if(s[0] != 'R') count ++;

        for(int i=1 ; i<n ; i++)
        {
            if(s[i-1] == s[i]) count ++;
        }

        cout << count << "\n";
    }
    
    return 0;
}
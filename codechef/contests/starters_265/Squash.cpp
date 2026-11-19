// https://www.codechef.com/problems/SQUASH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        string s2;
        s2.push_back(s[0]);

        for(int i= 1; i<n ; i++)
        {
            if(s[i] != s2.back())
            {
                s2.push_back(s[i]);
            }
        }

        if(s2.size() <= k) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
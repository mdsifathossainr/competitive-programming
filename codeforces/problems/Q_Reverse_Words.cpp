// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    reverse(s.begin() , s.end());

    cout << s;

    while (cin >> s)
    {
        reverse(s.begin() , s.end());
        cout << " " << s;
    }

    return 0;
}
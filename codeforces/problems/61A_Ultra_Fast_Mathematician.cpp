// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 , s2;
    cin >> s1 >> s2;

    int sz = s1.size();


    for(int i=0 ; i<sz ; i++)
    {
        if(s1[i] == s2[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    
    return 0;
}
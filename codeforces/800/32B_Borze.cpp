/*
Problem: B. Borze
Link: https://codeforces.com/problemset/problem/32/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for(int i=0 ; i<s.size();)
    {
        if(s[i] == '.')
        {
            cout << "0";
            i++;
        }
        else
        {
            if(i+1 < s.size() && s[i+1] == '.')
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
            i+=2;
        }
    }
}
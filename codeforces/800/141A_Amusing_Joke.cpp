/*
Problem: Codeforces 141A - Amusing Joke
Link: https://codeforces.com/problemset/problem/141/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    vector<int>v1(26,0);
    vector<int>v2(26,0);
    
    for(int val :  s1)
    {
       v1[val-'A']++;
    }
    for(int val : s2)
    {
        v1[val - 'A']++;
    }
    for(int val : s3)
    {
        v2[val - 'A']++;
    }

    bool flag = true;

    for(int i=0 ; i<26 ; i++)
    {
        if(v1[i] != v2[i])
        {
            flag = false;
            break;
        }   
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
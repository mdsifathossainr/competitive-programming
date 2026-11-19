// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   
    int sz = s.size();

    vector<int>v(26);

    for(int c : s)
    {
        if( c >= 'a' &&  c<= 'z')
        {
            v[c - 'a']++;
        }
    }

    int count = 0;

    for(int i=0 ; i<26 ; i++)
    {
        if(v[i] != 0)
        {
            count ++;
        }
    }

    cout << count << endl;
    return 0;
}
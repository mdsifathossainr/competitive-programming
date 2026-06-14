/*
Problem: Codeforces 228A - Is your horseshoe on the other hoof?
Link: https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(4);
    for(int i=0 ; i<4 ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int unq = v[0];
    int count = 0;

    for(int i=1 ; i<4 ; i++)
    {
        if(v[i] == unq ) count ++;
        else unq = v[i];
    }

    cout << count << endl;

    return 0;
}
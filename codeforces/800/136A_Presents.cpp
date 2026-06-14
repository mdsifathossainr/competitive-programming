/*
Problem: Codeforces 136A - Presents
Link: https://codeforces.com/problemset/problem/136/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n+1);
    for(int i=1 ; i<=n ; i++)
    {
        cin >> v[i];
    }

    vector<int>a(n+1);
    for(int i=1 ; i<=n ; i++)
    {
        a[v[i]] = i; 
    }
    
    for(int i=1 ; i<=n ; i++)
    {
        cout << a[i] <<" ";
    }
}
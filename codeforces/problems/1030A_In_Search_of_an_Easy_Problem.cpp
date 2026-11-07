// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin >> v[i];
    }

    int flag = 0;
    for(int val : v)
    {
        if(val == 1)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "EASY" << endl;        
    }
    else
    {
        cout << "HARD" << endl;
    }
    return 0;
}
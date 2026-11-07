// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , h;
    cin >> n >> h;

    vector<int>v(n);
     
    for(int i=0 ; i<n ; i++)
    {
        cin >> v[i] ;
    }

    int road_width = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(v[i] <= h) road_width +=1;
        else road_width += 2;
    }

    cout << road_width << endl;
    return 0;
}
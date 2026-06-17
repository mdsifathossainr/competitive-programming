/*
Problem: Codeforces 282A - Bit++
Link: https://codeforces.com/problemset/problem/282/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0;
    int n;
    cin >> n;
    
    while(n--)
    {
        string s;
        cin >> s;

        if(s == "X++") x ++;
        else if (s == "++X") ++x;
        else if (s== "--X") --x;
        else x --;
    }
    cout << x << endl;
    return 0;
}
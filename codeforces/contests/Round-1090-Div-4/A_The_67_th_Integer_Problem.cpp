//https://codeforces.com/contest/2218/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin  >> x;

        if(x == 67)
        {
            cout << "67" << endl;
        }
        else
        {
           int y = x + 1;
           cout << y << endl;
        }
       
    }
    return 0;
}
// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1 ; i<=n ; i++)
    {
        if(i == n)
        {

            if(i%2 != 0)
            {
                cout << "I hate it" << endl;
            }
            else
            {
                cout << "I love it" << endl;
            }
        }
        else if(i%2 != 0)
        {
           cout << "I hate that ";
        }
        else
        {
            cout << "I love that ";
        }
    }
    return 0;
}
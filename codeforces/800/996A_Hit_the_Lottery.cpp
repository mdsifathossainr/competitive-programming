/*
Problem: Codeforces 996A - Hit the Lottery
Link: https://codeforces.com/problemset/problem/996/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    if(n / 100 >= 1)
    {
        count += n / 100;
        n = n % 100 ;
    }
    if(n / 20 >= 1)
    {
        count += n /20;
        n = n % 20;
    }
    if(n / 10 >= 1)
    {
        count += n /10;
        n = n % 10;
    }
    if(n / 5 >= 1)
    {
        count += n /5;
        n = n % 5;
    }
    count += n;

    cout << count << endl;
   
    return 0;
}
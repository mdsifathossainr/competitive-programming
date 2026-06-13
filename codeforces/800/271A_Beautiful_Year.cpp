/*
Problem: Codeforces 271A - Beautiful Year
Link: https://codeforces.com/problemset/problem/271/A

Learning:
- Distinct means all values are different (no duplicates).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    while(true)
    {
        year ++;

        int a = (year % 10);
        int b = (year / 10) % 10;
        int c = (year / 100) % 10;
        int d = (year / 1000) % 10;
        
        if(a != b && a != c && a!=d && b != c && b!=d && c!=d)
        {
            cout << year << endl;
            break;
        }
    }
}
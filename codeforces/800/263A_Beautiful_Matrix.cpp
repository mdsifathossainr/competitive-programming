/*
Problem: Codeforces 263A - Beautiful Matrix
Link: https://codeforces.com/problemset/problem/263/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    int a = 0;
    int b = 0;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(a-2) + abs(b-2);
    return 0;
}
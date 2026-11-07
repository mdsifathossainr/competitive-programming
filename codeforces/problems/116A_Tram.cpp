// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int capacity = 0;
    int passengers = 0;

    while(n--)
    {
        int exit , enter ;
        cin >> exit >> enter;

        passengers += enter;
        passengers -= exit;

        capacity = max(capacity,passengers);
    }

    cout << capacity;

    return 0;
}
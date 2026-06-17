/*
Problem: Codeforces 469A - I Wanna Be the Guy
Link: https://codeforces.com/problemset/problem/469/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> vis(n + 1, false);

    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        vis[a] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        vis[a] = true;
    }

    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == false)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}
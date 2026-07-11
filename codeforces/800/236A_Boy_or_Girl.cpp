/*
Problem: Codeforces 236A - Boy or Girl
Link: https://codeforces.com/problemset/problem/236/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    set<char> st;

    for (char ch : s)
    {
        st.insert(ch);
    }

    if (st.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}
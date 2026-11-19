// https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int arr[26] = {0};
     
    if(n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i=0 ; i<n ; i++)
    {
        s[i] = tolower(s[i]);
        arr[s[i] - 'a'] ++;
    }

    int flag = 1;
    
    for(int i=0 ; i<26 ; i++)
    {
        if(arr[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        cout <<"YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
// https://www.codechef.com/problems/EXQUIZ

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , s;
        cin >> n >> s;

        if(s % 4 == 0)
        {
            cout << s / 4 << endl;
        }
        else if(n * 4 < s || s/4 < 1)
        {
            cout << -1 << endl;
        }
        else{
            int a = (s / 4)+1;
            int b = (a* 4) - s;

            cout << a + b << endl; 
        }
    }
    return 0;
}
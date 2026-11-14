// https://www.codechef.com/problems/RHYDOOR

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;

       string s;
       cin >> s;

       int a = 0;
       int b = 0;

       int ans = 0;


       for(int i=0 ; i<n ; i++)
       {
    
           if(s[i] == 'A')
           {
              if(b >= 3) ans += (b/3);
              b = 0;
              a++;
           }
           else
           {
               if(a >= 3) ans +=(a/3);
               a = 0;
               b++;
           }

           if(i == n-1)
           {
              if(a >= 3) ans += (a/3);
              else ans+= (b/3);
           }
       }
       
       cout << ans << "\n";  
    }

    return 0;
}
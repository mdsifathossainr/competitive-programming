// https://codeforces.com/contest/2290/problem/C

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

        deque<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        deque<int> dq;

        int i = 0;

        while (true)
        {
            if (i < n)
            {
                dq.push_front(v[i]);
                i++;
            }
            if (i < n)
            {
                dq.push_back(v[i]);
                i++;
            }
            else
            {
                break;
            }
        }

        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            int count = 0;

            int mx = 0;

            int i = 0;

            while (true)
            {
                if (mx < dq[i])
                {
                    count++;

                    mx = dq[i];
                }
                if (mx == v[0])
                    break;
                i++;
            }

            mx = 0;
            i = n - 1;

            while (true)
            {
                if (mx < dq[i])
                {
                    count++;
                    mx = dq[i];
                }
                if (mx == v[0])
                    break;
                i--;
            }

            if (v[0] != v[1])
            {
                cout << count - 1 << "\n";
            }
            else
            {
                cout << count << "\n";
            }
        }

        for (int i = 0; i < dq.size(); i++)
        {
            cout << dq[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}
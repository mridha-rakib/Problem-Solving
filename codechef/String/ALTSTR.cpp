#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n;

        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                cnt0++;
            else cnt1++;
        }

        if(cnt0 == cnt1)
            cout << n << endl;
        else if(cnt0 == n || cnt0 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 * min(cnt0, cnt1) + 1 << endl;
        }
    }

    return 0;
}


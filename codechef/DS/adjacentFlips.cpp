#include<bits/stdc++.h>
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

        int ct = 0;
        bool f = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i] == s[i + 1])
            {
                ct = 2;
                f = true;
            }
        }

        if (f == false)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    ct = 1;
                    break;
                }
            }
        }

        cout << ct << endl;
    }

    return 0;
}

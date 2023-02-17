#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s, u;
        cin >> n >> m >> s >> u;
        bool possible = true;
        bool beautiful_s = true, beautiful_u = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1])
            {
                beautiful_s = false;
                break;
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (u[i] == u[i-1])
            {
                beautiful_u = false;
                break;
            }
        }
        if (beautiful_s && beautiful_u && s[n-1] != u[m-1])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

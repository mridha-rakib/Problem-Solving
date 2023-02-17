#include<bits/stdc++.h>
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
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

//        bool beautiful = true;
//        for (int i = 1; i < n; i++)
//        {
//            if (s[i] == s[i-1])
//            {
//                beautiful = false;
//                break;
//            }
//        }
//        for (int i = 1; i < m; i++)
//        {
//            if (t[i] == t[i-1])
//            {
//                beautiful = false;
//                break;
//            }
//        }
//        if (beautiful)
//        {
//            cout << "YES\n";
//            continue;
//        }

        bool found = false;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = 0; j < m && !found; j++)
            {
                if (s[i] != t[j])
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
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

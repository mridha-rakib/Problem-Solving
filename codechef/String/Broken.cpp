#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin >> t;
    while(t-->0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int d = n / 2;

        string str1, str2;
        for(int i = 0; i < d; i++)
        {
            str1 += s[i];
        }

        for(int i = d; i < n; i++)
        {
            str2 += s[i];
        }

        if( str1 == str2 )
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

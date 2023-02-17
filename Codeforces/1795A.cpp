#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    string s,t;
    cin >> s >> t;
    int fir,sec;
    fir = sec = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i]==s[i-1])
        {
            fir++;
        }
    }

    for (int i = 1; i < m; i++)
    {
        if (t[i]==t[i-1])
        {
            sec++;
        }
    }

    if (fir+sec==0)
    {
        cout << "YES" << endl;
        return;
    }

    if ((fir == 0 || sec == 0) && max(fir, sec)==1)
    {
        if (s[n-1] != t[m-1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}


int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        solve();
    }


    return 0;
}

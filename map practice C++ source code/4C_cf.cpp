//Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int > cnt;

    while( t-- )
    {
        string s;
        cin >> s;

        if( cnt[s] == 0 )
        {
            cout << "OK" << endl;
            cnt[s] = 1;
        }
        else
        {
            cout << s << cnt[s] << endl;
            cnt[s]++;
        }
    }

    return 0;
}

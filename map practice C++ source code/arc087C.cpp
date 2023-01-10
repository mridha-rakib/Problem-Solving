//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <int, int> mp;

    for( int i = 1; i <= n; i++ )
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for( auto u : mp )
    {
        if( u.second >= u.first ) ans += ( u.second - u.first );
        else ans += u.second;
    }

    cout << ans << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long


map<ll, ll> m;

int main()
{
    ll n;
    cin >> n;

    ll ans = 0;
    ll current = 0;

    for ( int i = 0; i < 2 * n; i++ )
    {
        int x;
        cin >> x;
        if ( m.find(x) != m.end() )
            current--;
        else
        {
            m[x] = 1;
            current++;
            ans = max ( ans, current );
        }
    }

    cout << ans << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll modex ( ll x, ll n, ll p )
{

    ll ans = 1;
    while( n > 0 )
    {
        if( n & 1 )
            ans = (ans * x) % p;
        n = n >> 1;
        x = x * x % p;
    }

    return ans ;
}

int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        ll x, n, p;
        cin >> x >> n >> p;

        cout << modex(x, n, p) <<endl;
    }


    return 0;
}

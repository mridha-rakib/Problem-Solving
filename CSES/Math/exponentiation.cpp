#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long
const int MOD = 1e9 + 7;

//ll pow_mod(ll a, ll b)
//{
//    //long long res = 1;
//
//    if( b == 0)
//        return 1;
//
//    if( b & 1 ) return a * pow_mod(a, b - 1) % MOD;
//    else{
//        ll mid = b >> 1;
//        ll value = pow_mod(a, mid);
//        return value * value % MOD;
//    }
//}
// calculate a^b % MOD in O(log b) time

//int exp(int x, unsigned int y, int p)
//{
//    int res=1;
//    x=x%p;
//    while(y>0)
//    {
//        if (y&1) res= (res*x)%p;
//        y=y>>1;
//        x=(x*x)%p;
//    }
//    return res;
//}
//
//void solve()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    int r = exp(b,c,MOD-1);
//    cout<<(exp(a,r,MOD));
//}

ll binpow(ll x, ll n, ll m)
{
    assert(n >= 0);
    x %= m;
    ll res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)    // if n is odd
        {
            res = res * x % m;
        }
        x = x * x % m;
        n /= 2;  // divide by two
    }
    return res;
}


int main()
{
    optimize();

    int t;
    cin >> t;

    while( t-- )
    {
        int a, b, c;
        cin >> a >> b >> c;
//        ll exp = pow_mod(b, c);
//        ll ans = pow_mod(a, exp);

        ll pow_bc = binpow(b, c, MOD - 1);
        ll ans = binpow(a, pow_bc, MOD);

        cout << ans << '\n';
    }

    return 0;
}

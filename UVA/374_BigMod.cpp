#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll bigmod( ll a, ll n, ll p )
{
    if( n == 0 ) return 1;

    if( n % 2 == 1 ) return a * bigmod ( a, n - 1, p) % p;
    else
    {
        ll mid = n / 2;
        ll v = bigmod( a, mid, p );

        return v * v % p;
    }
}

int main()
{
    optimize();

    ll a, n, p;
    while(cin >> a >> n >> p)
        cout << bigmod(a, n, p) << endl;


    return 0;
}


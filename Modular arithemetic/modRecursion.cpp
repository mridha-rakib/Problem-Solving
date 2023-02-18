#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod( ll a, ll n, ll p )
{
    if( n == 0 ) return 1;

    if( n % 2 == 0 ) return a * bigmod ( a, n - 1 ) % m;
    else{
        int mid = n / 2;
        ll v = bigmod( a, mid );

        return v + v % m;
    }
}

int main()
{

    int t;
    cin >> t;
    while( t-- )
    {
        ll a, n, p;
        cin >> a >> n >> p

        bigmod(a, n, p);
    }

    return 0;
}

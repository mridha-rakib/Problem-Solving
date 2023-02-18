#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod( ll a, ll n, ll p )
{
    if( n == 0 ) return 1;

    if( n % 2 == 1 ) return a * bigmod ( a, n - 1, p) % p;
    else{
        ll mid = n / 2;
        ll v = bigmod( a, mid, p );

        return v * v % p;
    }
}

int main()
{

    int t;
    cin >> t;
    while( t-- )
    {
        ll a, n, p;
        cin >> a >> n >> p;

       cout << bigmod(a, n, p) << endl;
    }

    return 0;
}

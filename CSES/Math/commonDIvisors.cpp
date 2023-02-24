#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

ll gcd( ll a, ll b )
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}


ll maxGCD( ll arr[], ll n )
{
    ll max_gcd = 0;

    for( ll i = 0; i < n; i++ )
    {
        for( ll j = i + 1; j < n; j++ )
        {
            ll current_gcd = gcd(arr[i], arr[j]);
            max_gcd = max( max_gcd, current_gcd );
        }
    }

    return max_gcd;
}


int main() {
    optimize();

    ll n;
    cin >> n;

    ll arr[n];
    for( ll i = 0; i < n; i++ ) cin >> arr[i];

    ll max_gcd = maxGCD( arr, n );
    cout << max_gcd << endl;

    return 0;
}


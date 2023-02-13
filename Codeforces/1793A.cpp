#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        ll cost;

        ll q = n;
        ll r = n - q * ( m + 1 );

        ll result = ( q * min( a * m, b * ( m + 1 )) + r * min ( a, b) );
        cout << result << endl;

    }
    return 0;
}



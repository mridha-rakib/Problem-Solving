#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t-- )
    {
        int n;
        cin >> n;
        priority_queue<ll>pq;

        for ( int i = 0; i < n; i++ )
        {
            int a;
            cin >> a;
            pq.push( -a );
        }

        ll ans = 0;

        while ( pq.size() > 1 )
        {
            ll a = -pq.top();
            pq.pop();

            ll b = -pq.top();
            pq.pop();

            pq.push( - (a + b) );

            ans += ( a + b );
        }

        cout << ans << endl;
    }
    return 0;
}

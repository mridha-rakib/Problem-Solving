#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e7 + 123;

int cnt[mx];


int main()
{
    optimize();

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ )
    {
        for ( int j = i; j <= n; j += i )
        {
            cnt[j]++;
        }
    }


    long long int ans = 0;

    for ( int i = 1; i <= n; i++ )
    {
        ans += ( 1LL * i * cnt[i] );
    }

    cout << ans << endl;

    return 0;
}

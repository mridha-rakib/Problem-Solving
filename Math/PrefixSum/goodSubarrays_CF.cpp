#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long

int main()
{
    optimize();

    const int MN = 1e5+10;

    int n, t, a[MN];
    char x;

    cin >> t;
    for( int i = 0; i < t; i++ )
    {
        cin >> n;
        for( int k = 0; k < n; k++ )
        {
            cin >> x;
            a[k] = x - '1';
        }
    }

    map<int, int>sum;
    sum [0] = 1;

    ll psum = 0, answer = 0;

    for( int j = 0; j < n; j++ )
    {
        psum += a[j];
        answer += sum[psum];
        sum[psum]++;
    }
    cout << answer << endl;
    memset(a, 0, n+1), sum.clear();

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int longestSubarrayWithSumK(vector<int> a, long long target)
{
    // Write your code here

    ll len = INT_MIN;

    for ( int i = 0; i < a.size(); i++ )
    {
        for ( int j = i; j < a.size(); j++ )
        {
            ll sum = 0;
            for ( int k = i; k <= j; k++ )
            {
                sum += a[k];
            }
            if ( sum == target ) len = max( len, 1LL*(j - i + 1 ));
        }
    }

    return len;
}


int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for ( int i = 0; i < n; i++ )
            cin >> a[i];

        cout << longestSubarrayWithSumK( a, n ) << endl;;
    }

    return 0;
}

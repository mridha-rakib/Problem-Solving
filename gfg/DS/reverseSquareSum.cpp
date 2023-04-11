#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while ( t-- )
    {
        int n;
        cin >> n;

        int ans = 0;
        int arr[n];
        for ( int i = 0; i < n; i++ ) cin >> arr[i];

        ans = arr[n - 1] * arr[n - 1];
        int c = 0;
        for ( int i = n - 2; i >= 0; i-- )
        {
           if ( c & 1)
                ans += arr[i] * arr[i];
           else ans -= arr[i] * arr[i];

           c++;
        }

        cout << ans << endl;
    }

    return 0;
}

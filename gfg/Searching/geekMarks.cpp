#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();

    int t;
    cin >> t;

    while( t-- )
    {
        int n;
        cin >> n;
        int arr[n];

        for( int i = 0; i < n; i++ ) cin >> arr[i];

        sort(arr, arr + n);
//        for( int i = 0; i < n; i++ ) cout << arr[i] <<" ";
//        cout <<"end array "<<endl;

        int q;
        cin >> q;

        while(q--)
        {
            int x;
            cin >> x;
            int idx = lower_bound(arr, arr + n, x + 1) - arr;
            lli sum = 0;
            for( int i = idx; i < n; i++ )
            {
                    sum += arr[i];
            }
            cout << sum << endl;
        }

    }

    return 0;
}

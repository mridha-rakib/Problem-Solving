#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;

int arr[mx];


int main()
{

    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) cin >> arr[i];

    if( n < 3 ) cout << -1 << endl;
    else
    {
        for ( int i = 0; i < n; i++ )
        {
            if ( i < 2)
            {
                cout <<"-1\n";
                continue;
            }

            int a1 = arr[i];
            int a2 = arr[i - 1];
            int a3 = arr[i - 2];

            int max_val = max( a1, max( a2, a3 ));
            int min_val = min( a1, min( a2, a3 ));
            int mid_val = a1 + a2 + a3 - max_val - min_val;

            cout << 1LL * max_val * mid_val * min_val << endl;

        }
    }

    return 0;
}

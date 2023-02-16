#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for( int i = 0; i < n; i++ )
            cin >> arr[i];

        int k;
        cin >> k;

        int count = 0;
        int sum = 0;

        for( int i = 0; i < n; i++ )
        {
            sum = arr[i];
            if( sum == k )
                count++;

            for( int j = i + 1; j < n; j++ )
            {
                sum += arr[j];

                if( sum == k )
                    count++;
            }
        }


    cout << "Number of subarrays with sum " << k << " is " << count << endl;
    }

    return 0;
}

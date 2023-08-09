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

        int arr[n];

        for ( int i = 0; i < n; i++ )
        {
            cin >> arr[i];
        }

        sort ( arr, arr + n );

        int right = n - 1;
        int left = 0;

        int sum = 0;
        while ( left < right )
        {
            sum += arr[right] - arr[left];
            left++;
            right--;
        }

        cout << sum << endl;
    }

    return 0;
}

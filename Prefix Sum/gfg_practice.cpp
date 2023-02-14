#include<bits/stdc++.h>
using namespace std;

void fillPrefixSum( int arr[], int n, int prefixSum[] )
{
    prefixSum[0] = 0;

    for( int i = 0; i < n; i++ ){
        prefixSum[i] = prefixSum[ i - 1 ] + arr[ i ];
    }
}

int printLR( int prefixSum[], int l, int r )
{
    int sum = 0;
    for( int i = l; i < r; i++ )
    {
        sum += prefixSum[i];
    }
    return sum;

}

int main()
{
    int arr[] = { 10, 4, 16, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefixSum [ n ];

    fillPrefixSum( arr, n, prefixSum );
    for( int i = 0; i < n; i++ )
        cout << prefixSum[i] << " ";
    cout << endl << endl;

    int l, r;
    cin >> l >> r;

    cout << printLR( prefixSum, l, r ) << endl;

    return 0;
}

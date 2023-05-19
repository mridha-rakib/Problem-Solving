#include<bits/stdc++.h>
using namespace std;

void solve( int arr[], int n, int d )
{
    if ( d == 0 )
        return;
    int temp = arr[0];

    for ( int i = 0; i < n - 1; i++ )
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    for ( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    solve( arr, n, d-1 );
}

int main()
{

    int n = 5;
    int arr[] = {1, 3, 5, 7, 9};

    solve( arr, n, 3 );

    return 0;
}

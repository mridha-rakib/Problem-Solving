#include<bits/stdc++.h>
using namespace std;

void solve( int arr[], int n )
{
    vector<int> v;
    for ( int i = 0; i < n; i++ )
    {
        if ( arr[i] != 0 )
            v.push_back(arr[i]);
    }

    int sz = v.size();

    for ( int i = 0; i < sz; i++ )
    {
        arr[i] = v[i];
    }

    for ( int i = sz; i < n; i++ )
    {
        arr[i] = 0;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for ( int i = 0; i < n; i++ )
        cin >> arr[i];

    solve( arr, n );

    for ( int i = 0; i < n; i++ )
        cout << arr[i] << " ";

    return 0;
}

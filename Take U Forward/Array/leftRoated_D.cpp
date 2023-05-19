#include<bits/stdc++.h>
using namespace std;

void solve ( int a[], int n, int d )
{
    if (n == 0) return;
    // Get the effective number of rotations:
    d = d % n;

    //checking if d is a multiple of n:
    if (d == 0) return;

    int temp[d]; // temporary array

    int temp[d];
    for ( int i = 0; i < d; i++ )
    {
        temp[i] = a[i];
    }

    for ( int i = d; i < n; i++ )
    {
        a[i - d] = a[i];
    }

    for ( int i = n - d; i < n; i++ )
    {
        a[i] = temp[i - (n - d)];
    }

    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << " ";
    }
}


int main()
{
    int n = 7;
    int d = 4;

    int arr[]= {1, 2, 3, 4, 5, 6, 7};
    solve(arr, n, d);

    return 0;
}

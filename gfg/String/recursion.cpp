#include<bits/stdc++.h>
using namespace std;

void reverseArray( int arr[], int l, int r )
{
    ///int l = 0, int r = n - 1;

   if (l >= r) {
        return; // Base case: nothing to reverse
    }

    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);

}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for ( int i = 0; i < n; i++ )
        cin >> arr[i];


    reverseArray( arr, 0, n - 1 );

    for ( int i = 0; i < n; i++ )
        cout << arr[i] << " ";

    return 0;
}

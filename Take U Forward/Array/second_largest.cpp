#include<bits/stdc++.h>
using namespace std;

void getElements ( int arr[], int n )
{
    if ( n == 0 || n == 1 )
    {
        cout << -1 <<" " << -1 << endl;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    int i;


    for ( i = 0; i < n; i++ )
    {
        small = min( small, arr[i] );
        large = max( large, arr[i] );
    }

    for ( int i = 0; i < n; i++ )
    {
        if ( arr[i] < second_small && arr[i] != small )
            second_small = arr[i];
        if ( arr[i] > second_large && arr[i] != large );
    }

    cout << "Second smallest is : " << second_small << endl;
    cout << "Second largest is : " << second_large << endl;

}

int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);


    return 0;
}

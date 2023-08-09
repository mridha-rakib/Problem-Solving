#include<bits/stdc++.h>
using namespace std;

bool searchNext( int arr[], int k, int n )
{
    for ( int i = 0; i < n; i++ )
    {
        if ( arr[i] == k )
        {
            return true;
        }
    }

    return false;
}

void solve( int nums[], int n )
{
    int max_length = 0;

    for ( int i = 0; i < n; i++ )
    {
        int currentElement = nums[i];
        int currentLength = 1;
        while ( searchNext( nums, currentElement + 1, n))
        {
            currentElement = currentElement + 1;
            currentLength = currentLength + 1;
        }

        max_length = max( currentLength, max_length );
    }

    cout << max_length << endl;
}


int main()
{
    int nums[]  = {1, 2, 100, 101, 3, 500, 4, 103, 5, 6, 7, 8};
    int n = sizeof( nums ) / ( nums[0] );
    solve( nums, n );

    return 0;
}

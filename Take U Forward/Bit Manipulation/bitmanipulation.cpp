#include<bits/stdc++.h>
using namespace std;

int main()
{

    int nums[] = {2, 1, 2, 5, 1, 4, 4, 7, 3, 3};

    int n = sizeof( nums ) / ( nums[0] );

    int xorr = 0;
    int cnt = 0;
    for ( int i = 0; i < n; i++ )
    {
        xorr = xorr ^ nums[i];
    }
    cout << xorr << endl;
    while ( xorr )
    {
        if ( xorr & 1 )
            break;
        cnt++;
        xorr = xorr >> 1;
    }






    int xorr1 = 0, xorr2 = 0;

    for ( int i = 0; i < n; i++ )
    {
        if ( nums[i] & ( 1 << cnt ) )
        {
            xorr1 = xorr1 ^ nums[i];
        }
        else
            xorr2 = xorr2 ^ nums[i];
    }

    cout << xorr1 << " " << xorr2 << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool searchNext( int nums[], int n, int k )
{
    for ( int i = 0; i < n; i++ )
    {
        if ( nums[i] == k)
        {
            return true;
        }
    }
    return false;

}

int longestConsecutive( int nums[], int n )
{
    int longestlength = 0;
    for ( int i = 0; i < n; i++ )
    {
        int number = nums[i];
        int lenght = 1;

        while ( searchNext( nums, n, number + 1) )
        {
            number = number + 1;
            lenght++;
        }

        longestlength = max ( longestlength, lenght );
    }
    return longestlength;
}

int main()
{

    int nums[] = {100,4,200,1,3,2};

    int n = sizeof( nums ) / sizeof( nums[0] );

    cout << longestConsecutive( nums, n ) << endl;

    return 0;
}

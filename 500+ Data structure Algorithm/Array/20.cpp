#include<bits/stdc++.h>
using namespace std;

void  findBitonicSubarray(int arr[], int n)
{
    if ( n == 0 )
        return;

    int I[n];
    I[0] = 1;
    for ( int i = 1; i < n; i++ )
    {
        I[i] = 1;
        if ( arr[i - 1] < arr[i] )
        {
            I[i] = I[i - 1] + 1;
        }
    }

    int D[n];
    D[n - 1] = 1;

    for ( int i = n - 2; i >= 0; i-- )
    {
        D[i] = 1;
        if ( arr[i] > arr[i + 1])
        {
            D[i] = D[i + 1] + 1;
        }
    }


    int lbs_len = 1;
    int beg = 0, end = 0;

    for ( int i = 0; i < n; i++ )
    {
        if ( lbs_len < I[i] + D[i] - 1 )
        {
            lbs_len = I[i] + D[i] - 1;
            beg = i - I[i] + 1;
            end = i + D[i] - 1;
        }
    }
    printf("The length of the longest bitonic subarray is %d\n", lbs_len);
    printf("The longest bitonic subarray indices is [%d, %d]", beg, end);
}

int main()
{
    int arr[] = {3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    findBitonicSubarray(arr, n);

    return 0;
}

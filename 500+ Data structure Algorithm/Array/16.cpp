#include<bits/stdc++.h>
using namespace std;

bool isConsecutive ( int arr[], int i, int j, int min, int max )
{
    if ( max - min != j - i )
        return false;


    vector < bool > visited ( j - i + 1 );

    for ( int k = i; k <= j; k++ )
    {

    }

}

void findMaxSubArray( int arr[], int n )
{
    int len = 1;
    int start = 0, end = 0;

    for ( int i = 0; i < n - 1; i++  )
    {
        int min_val = arr[i], max_val = arr[i];

        for ( int j = i + 1; j < n; j++ )
        {
            min_val = min( min_val, a[j] );
            max_val = max( max_val, a[j] );

            if ( isConsecutive( arr, i, j, min_val, max_val ))
            {
                if ( len < max_val - min_val + 1 )
                {
                    len = max_val - min_val + 1;
                    start = i, end = j;
                }
            }
        }
    }

    cout << "The largest subarray is : " << start << " , " << end << endl;
}



int main()
{

    int arr[] = {2, 0, 2, 1, 4, 3, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxSubArray(arr, n);

    return 0;
}

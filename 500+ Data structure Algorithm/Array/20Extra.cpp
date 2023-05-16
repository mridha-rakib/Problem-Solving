#include<bits/stdc++.h>
using namespace std;

void findBitonicSubarray ( int arr[], int n )
{
    int end_index = 0, max_len = 1, i = 0;

    while ( i + 1 < n )
    {
        int len = 1;

        while ( i + 1 < n && arr[i] < arr[i + 1] )
        {
            len++, i++;
        }

        while ( i + 1 < n && arr[i] > arr[i + 1] )
        {
            i++, len++;
        }

        while ( i + 1 < n && arr[i] == arr[i + 1])
        {
            i++;
        }

        if ( len > max_len )
        {
            max_len = len;
            end_index = i;
        }
    }

    cout << "Max lenght : " << max_len << endl;
    cout << "Starting : " << end_index - max_len + 1 << endl;
    cout << "End index : " << end_index << endl;
}


int main()
{
    int A[] = { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 };
    int n = sizeof(A) / sizeof(A[0]);

    findBitonicSubarray(A, n);

    return 0;

    return 0;
}

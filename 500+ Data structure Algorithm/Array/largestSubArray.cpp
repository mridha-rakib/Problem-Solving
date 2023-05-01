#include<bits/stdc++.h>
using namespace std;



void findMaxSubarray( int a[], int n)
{
    int len = 1;
    int start = 0, end = 0;

    for ( int i = 0; i < n - 1; i++ )
    {
        int min_val = a[i], max_val = a[i];


        for ( int j = i + 1; j < n; j++ )
        {
            min_val = min(min_val, a[j]);
            max_val = max(max_val, a[j]);
        }

    }


}


int main()
{
    int a[] = {2, 0, 2, 1, 4, 3, 1, 0};

    int n = sizeof(a) / sizeof(a[0]);

    findMaxSubarraay(a, n);

    return 0;
}

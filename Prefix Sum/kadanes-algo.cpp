// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int maxSum = INT_MIN, maxEnd = 0;
    for ( int i = 0; i < size; i++ )
    {
        maxEnd +=a[i];
        if( maxEnd > maxSum )
        {
            maxSum = maxEnd;
        }

        if( maxEnd < 0 )
            maxEnd = 0;

    }
    return maxSum;
}

// Driver Code
int main()
{
	int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);

	// Function Call
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}


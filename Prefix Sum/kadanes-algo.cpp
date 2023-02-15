// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int maxSubarraySum(int arr[], int n)
    {
        int max_so_far = INT_MIN;
        int max_ending_here = 0;

        for (int i = 0; i < n; i++)
        {
            max_ending_here = max(max_ending_here + arr[i], arr[i]);
            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }

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


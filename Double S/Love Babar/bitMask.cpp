//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int arr1[], int n, int arr2[], int m)
    {
        //code here
        // Create bitmasks for the two arrays.
        unsigned long long bitmask1 = 0;
        unsigned long long bitmask2 = 0;

        // For each element in the first array, set the corresponding bit in the bitmask.
        for (int i = 0; i < n; i++)
        {
            bitmask1 |= (1ULL << arr1[i]);
        }

        // For each element in the second array, set the corresponding bit in the bitmask.
        for (int i = 0; i < m; i++)
        {
            bitmask2 |= (1ULL << arr2[i]);
        }

        // Count the number of bits in the bitmask that are set to 1.
        unsigned long long count = __builtin_popcountll(bitmask1 | bitmask2);

        return count;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while(t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for(int i = 0; i<n; i++)
            cin >> a[i];

        for(int i = 0; i<m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;

    }

    return 0;
}
// } Driver Code Ends

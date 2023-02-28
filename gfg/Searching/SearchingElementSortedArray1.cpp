//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K)
    {

        // Your code here
        unordered_set<int>us;

        for(int i = 0; i < N; i++ )
        {
            us.insert(arr[i]);
        }

        for(int i = 0 ;i < N; i++ )
        {
            if(us.find(K) == us.end())
                return -1;
        }
        return 1;
    }
};

//{ Driver Code Starts.


int main(void)
{

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

    return 0;
}

// } Driver Code Ends


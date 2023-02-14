//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        vector<int> result;
        int i = 0, j = 0, sum = 0;

        // loop through the array and try to find a subarray with sum equal to s
        while (j < n)
        {
            sum += arr[j];
            while (i < j && sum > s)
            {
                sum -= arr[i];
                i++;
            }
            if (sum == s)
            {
                result.push_back(i+1); // add 1 to convert from 0-indexing to 1-indexing
                result.push_back(j+1); // add 1 to convert from 0-indexing to 1-indexing
                return result; // return the subarray indices and exit the function
            }
            j++;
        }

        result.push_back(-1); // if no subarray is found, return -1
        return result;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);

        for(int i = 0; i<res.size(); i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
    return 0;
}
// } Driver Code Ends

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
        int i = 0, j = 0; // pointers
        vector < int > Union; // Uninon vector
        while (i < n && j < m)
        {
            if (arr1[i] <= arr2[j]) // Case 1 and 2
            {
                if (Union.size() == 0 || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;
            }
            else   // case 3
            {
                if (Union.size() == 0 || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++;
            }
        }
        while (i < n) // IF any element left in arr1
        {
            if (Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        while (j < m) // If any elements left in arr2
        {
            if (Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
        return Union.size();
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

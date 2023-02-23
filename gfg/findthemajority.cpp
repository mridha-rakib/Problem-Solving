//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        // your code here
        int count = 0, majority = 0;

        // Boyer-Moore voting algorithm
        for(int i=0; i<size; i++)
        {
            if(count == 0) majority = a[i];
            if(majority == a[i]) count++;
            else count--;
        }

        cout << majority << endl;
        // Check if the majority element appears more than n/2 times
        count = 0;
        for(int i=0; i<size; i++)
        {
            if(majority == a[i]) count++;
            if(count > size/2) return majority;
        }

        // No majority element found
        return -1;

    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends

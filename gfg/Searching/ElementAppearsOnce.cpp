//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(int A[], int N){
	    //code
	    unordered_map<int, int>mm;

	    for( int i = 0; i < N; i++ )
          {
              mm[A[i]]++;
          }


        for(auto x : mm)
        {
            if(x.second == 1)
                return x.first;
        }
        return -1;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends

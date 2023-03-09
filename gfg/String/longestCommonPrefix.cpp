//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:

    string commonPrefix(string &str1, string &str2)
    {
      string result = "";

      int len = min( str1.length(), str2.length());

      for( int j = 0; j < len; j++ )
      {
          if(str1[j] == str2[j]) result += str1[j];
          else break;
      }
      return result;
    }

    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix = arr[0];

        for(int i = 0; i <N; i++)
        {
            prefix = commonPrefix(arr[i], prefix);
        }

        return prefix == "" ? "-1" : prefix;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) {
        // code here
        int i = 0;
        int j = S.size() - 1;

        int count = 0;
        while ( i < j )
        {
            if ( S[i] != S[j] )
                count++;

                i++, j--;
        }

        return count;

    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends

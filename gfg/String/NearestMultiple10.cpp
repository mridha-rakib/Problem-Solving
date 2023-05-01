//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N)
    {
        // Complete the function
        string ans;

        int len = N.size(), j = len - 1, carry = 0;

        if ( int ( N[j] - '0' ) > 5 )
        {
            carry = 1;
        }

        ans.push_back( '0' );
        j--;

        while ( j >= 0 )
        {
            if ( )
        }
    }

};

//{ Driver Code Starts.

int main() {

    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }

	return 0;
}
// } Driver Code Ends

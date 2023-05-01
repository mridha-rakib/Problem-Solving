//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;


        for ( int i = 0; i < n; i++ )
        {
            if ( s[i] == '(' )
            {
                st.push(i);
            }
            else
            {
                if ( !st.empty() && s[st.top()] != '(')
                {
                    st.pop();
                }
                else
                {
                    st.push( i );
                }
            }
        }

        int result = 0;
        int lastIndex = s.length();

        while ( !st.empty() )
        {
            int top = st.top();
            st.pop();
            result = max( result, lastIndex - top - 1 );
            lastIndex = top;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends

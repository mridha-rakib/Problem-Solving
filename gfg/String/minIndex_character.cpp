//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    // Code here
	    unordered_map<char, int> mp;

	    for ( int i = 0; i < patt.size(); i++ )
        {
            mp[patt[i]]++;
        }

        for ( int i = 0; i < S.size(); i++ )
        {
            if ( mp.find(S[i]) != mp.end() )
                return string(1, S[i]);
        }
        return "$";


         // Code here
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }

	return 0;
}
// } Driver Code Ends

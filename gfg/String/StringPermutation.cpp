//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    vector<string> ans;
	    unordered_map<string, int> ump;

	    void permute( string& s, int index )
	    {
            if(index == s.size())
            {
                if(ump.find(s) == ump.end()){
                    ans.push_back(s);
                    ump[s]++;
                }
            }
	    }

		vector<string>find_permutation(string S)
		{
		    // Code here there
            sort( S.begin(), S.end());
            permute(S, 0);
            return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends

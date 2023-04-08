//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
      unordered_map<int, int> mp;

      for ( int i = 0; i < s.size(); i++ )
      {
          mp[s[i]]++;
      }

      for ( int i = 0; i < s.size(); i++ )
      {
          if (mp[s[i]] < 2 )
            return s[i];
      }

      return '$';
    }

};

//{ Driver Code Starts.

int main() {

	int T;
	cin >> T;

	while(T--)
	{

	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);

        if(ans != '$')
	    cout << ans;
        else cout << "-1";

        cout << endl;

	}

	return 0;
}

// } Driver Code Ends

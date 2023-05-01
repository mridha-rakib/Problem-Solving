//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	string printString(string &S, char ch, int count)
	{
	    // Your code goes here
        string ans = "";

        for ( int i = 0; i < S.length(); i++ )
        {

            if ( count <= 0 )
            {
                ans.push_back(S[i]);
            }

            if ( S[i] == ch )
                count--;
        }
        if ( ans.size() == 0 )
            ans = "Empty string";

//	    size_t index = S.find( ch );
//
//	    for ( int i = index; i < S.size(); i++ )
//        {
//            ans += S[i];
//        }

        return ans;
	}
};

//{ Driver Code Starts.

int main()
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";

   	}

    return 0;
}
// } Driver Code Ends

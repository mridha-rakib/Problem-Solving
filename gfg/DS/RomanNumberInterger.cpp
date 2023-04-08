//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int romanToDecimal(string &str)
    {
        // code here
        unordered_map<char, int> mp;

        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});

        int i = 0, len = str.length();
        int ans = 0;

        while ( i < len )
        {
            char ch = str[i];

            for ( auto it = mp.begin(); it != mp.end(); it++ )
            {
                if ( it-> first == ch )
                {
                    if ( i == len - 1 )
                        ans = ans + mp[ch];
                    else
                    {
                        if (mp[str[i]] < mp[str[i + 1]])
                        {
                            ans = ans - mp[ch];
                        }
                        else
                        {
                            ans = ans + mp[ch];
                        }
                    }

                    break;
                }

            }
             i++;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends

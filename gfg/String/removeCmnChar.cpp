//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        pair<char, int> arr[26];

        char ans = 'z';

        int mx = 0;

        for(int i = 0; i < 26; i++)
        {
            arr[i] = {'~', 0};
        }

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            int index = ch - 'a';

            if(arr[index].first != ch)
            {
                arr[index] = {ch, 1};
            }
            else
            {
                arr[index].second++;
            }
        }

        for (int i = 0; i < 25; i++)
        {
            if(arr[i].second > mx)
            {
                char ch = arr[i].first;
                ans = ch;
                mx = arr[i].second;
            }
            else if(arr[i].second == mx)
            {
                char ch = arr[i].first;
                ans = min(ans, ch);
            }
        }

        return ans;
    }

};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends

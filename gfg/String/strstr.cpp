//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;

        cin>>a;
        cin>>b;

        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    //Your code here

    int index = -1;
    if( s.length() >= x.length())
    {
        for (int i = 0; i <= s.length() - x.length(); i++)
        {
            bool found = true;
            for (int j = 0; j < x.length(); j++)
            {
                if (s[i + j] != x[j])
                {
                    found = false;
                    break;
                }
            }

            if (found)
            {
                index = i;
                break;
            }

        }
    }
    return index;

}

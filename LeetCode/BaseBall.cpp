#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution
{
public:

    int infixToPostfix(vector<string>& ops)
    {
        stack<int>st;

        for (auto u : ops)
        {
            if (u.size() > 1)
                st.push( stoi( u ) );
            else if ( isdigit( u[0] ))
                st.push( u[0] - '0' );
            else if ( u[0] == '+' )
            {
                int a1 = -1, a2 = -1;

                if ( !st.empty())
                {
                    a1 = st.top();
                    st.pop();
                }
                if ( !st.empty() )
                {
                    a2 = st.top();
                    st.pop();
                }

                if ( a2 != -1 )
                {
                    st.push(a2);
                    st.push(a1);
                    st.push( a1 + a2);
                }
                else if ( a1 != -1)
                {
                    st.push ( a1 );
                }
            }
            else if ( u[0] == 'D' )
            {
                if ( !st.empty() )
                {
                    st.push ( 2 * st.top() );
                }
            }

            else
            {
                if ( !st.empty() ) st.pop();
            }
        }

        long long ans = 0;

        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        vector<string> ops;
        string s;
        cin >> s;
        ops.push_back(s);
        Solution ob;
        cout << ob.infixToPostfix(ops) << endl;
    }
    return 0;
}

// } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;

int maxDepth ( string &s )
{
    int count = 0;

    stack<int>st;

    for ( int i = 0; i < s.size(); i++ )
    {
        if ( s[i] == '(' )
        {
            st.push(i);
        }
        else if ( s[i] == ')' )
        {
            if ( count < st.size() )
            {
                count = st.size();
            }
            st.pop();
        }
    }

    return count;
}



int main()
{
    string s = "( ((X)) (((Y))) )";
    cout << maxDepth(s);

    // This code is contributed by rakeshsahni

    return 0;
}

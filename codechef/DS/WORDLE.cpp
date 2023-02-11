#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while( t-- )
    {
        string s, t, result;
        cin >> s >> t;

        for( int i = 0; i < 5; i++ )
        {
            if( s[i] == t[i] )
            {
                result += 'G';
            }
            else
            {
                result += 'B';
            }

        }
        cout << result << endl;
    }

    return 0;
}

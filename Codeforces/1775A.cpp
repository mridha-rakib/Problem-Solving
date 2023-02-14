#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin  >> t;
    while( t-- )
    {
        string s;
        cin >> s;

        int n = s.size();

        int pos = 0;
        for( int i = 0; i < n - 1; i++ )
        {
            if( s[i] == 'a' )
            {
                pos = i;
                break;
            }
        }

        if( pos )
            cout << s.substr( 0, pos ) << " " << 'a' << " " << s.substr(pos+1) << endl;
        else
            cout << s[0] << " " << s.substr( 1, n - 2 )<< " " << s[ n - 1 ] << endl;

    }

    return 0;
}


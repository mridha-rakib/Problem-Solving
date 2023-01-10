///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        string s;
        char c;
        cin >> c;
        getline( cin, s );
        s = c + s;

        string temp;
        vector < string > word;
        for ( auto u : s )
        {
            if ( isspace( u ))
            {
                word.push_back( temp );
                temp.clear();
            }
            else{
                temp+=u;
            }
        }
        word.push_back( temp );

        map < string, int > cnt;
        int mxFrq = 0;

        for( auto u : word ){
            cnt[u]++;
            mxFrq = max( mxFrq, cnt[u] );
        }

        string ans;
        for( auto u : word )
        {
            if( cnt[u] == mxFrq )
             {
                ans = u;
                break;
             }
        }
        cout << ans << endl;
    }

    return 0;
}

///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        map < string, int > cnter;

        int n;
        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            string s;
            cin >> s;
            cnter[s]++;
        }

        int ans = 0;

        for( auto x : cnter )
            if( x.second == 2 ) ans++;
        cout << ans << endl;
    }


    return 0;
}

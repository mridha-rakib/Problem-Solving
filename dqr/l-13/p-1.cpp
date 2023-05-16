#include<bits/stdc++.h>
using namespace std;


vector <int> divisors[123];

int main()
{
    int n;
    cin >> n;

    //vector <vector<int>> divisors;
    for ( int i = 1; i <= n; i++ )
    {
        int sq = sqrt( i );
        for ( int j = 1; j <= sq; j++ )
        {
            if ( i % j == 0 )
                divisors[i].push_back( j );
            if ( i / j != j)
                divisors[i].push_back( i / j );
        }
        sort( divisors[i].begin(), divisors[i].end() );
    }



    for ( int i = 1; i <= n; i++ )
    {
        for ( auto j : divisors[i] )
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

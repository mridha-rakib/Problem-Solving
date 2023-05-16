#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector < int > rk1;
    vector < int > rk2;
    vector < int > rk3;


    rk1.push_back( 1 );
    rk1.push_back( 2 );

    rk2.push_back( 3 );
    rk2.push_back( 4 );

    rk3.push_back( 10 );
    rk3.push_back( 20 );
    rk3.push_back( 30 );

    vector < vector < int > > vec;
    vec.push_back ( rk1 );
    vec.push_back ( rk2 );
    vec.push_back ( rk3 );

    for ( auto it : vec )
    {
        for ( auto i : it )
        {
            cout << i << " ";
        }
        cout << endl;
    }


    for ( int i = 0; i < vec.size(); i++ )
    {
        for (  int j = 0; j < vec[i].size(); j++ )
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

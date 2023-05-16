#include<bits/stdc++.h>
using namespace std;

int main()
{

    ///segmentation fault if you push_bak 10^7 times

    vector < int > vec;

    vec.push_back( 1 );
    vec.push_back( 3 );
    vec.push_back( 5 );
    vec.push_back( 7 );
    vec.push_back( 9 );

    //vec.pop_back();

//    for ( auto i : vec )
//        cout << i << " ";

    vector < int > vec1 ( vec.begin(), vec.begin() + 3 );

    for ( auto i : vec1 )
    {
        cout << i << " ";
    }


    return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool rated( vector<pair<int, int>> vec )
{
    for ( int i = 0; i < vec.size(); i++ )
    {
        if( vec[i].first != vec[i].second )
            return true;
    }
    return false;
}

bool unrated ( vector<pair<int, int>> vec )
{
    if( rated( vec ))
        return false;

    for( int i = 0; i < vec.size()-1; i++ )
    {
        if( vec[i].first < vec[i + 1].first)
            return true;
    }
    return false;
}


int main()
{
    optimize();


    int n;
    cin >> n;

    vector < pair < int, int > > vec ( n );

    for( int i = 0; i < n; i++ )
    {
        cin >> vec[i].first >> vec[i].second;
    }

    if( rated( vec ) )
        cout << "rated" << endl;
    else if( unrated ( vec ) )
        cout << "unrated" << endl;
    else cout << "maybe" << endl;

    return 0;
}

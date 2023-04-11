#include<bits/stdc++.h>
using namespace std;

int main()
{

    multimap<int, int> mp;

    mp.insert(pair<int, int>(1, 40));
    mp.insert(pair<int, int>(3, 30));
    mp.insert(pair<int, int>(2, 60));
    mp.insert(pair<int, int>(6, 50));
    mp.insert(pair<int, int>(6, 10));

    multimap<int, int> :: iterator it;
//
//    for ( it = mp.begin(); it != mp.end(); it++)
//    {
//        cout << it->first << " " << it->second << endl;
//    }
//
//    cout << endl;

    multimap < int, int > mp2( mp.begin(), mp.end() );

//    for ( it = mp2.begin(); it != mp2.end(); it++ )
//        cout << it->first <<" " << it->second << endl;

//    int num = mp2.erase(6);
//    cout << num << endl;

    for ( it = mp2.begin(); it != mp2.end(); it++ )
        cout << it->first <<" " << it->second << endl;


    cout << mp2.lower_bound(6) -> first<<" " << mp2.upper_bound(6) -> second << endl;

    return 0;
}

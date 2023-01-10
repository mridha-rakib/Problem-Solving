///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
///Complexity n * log2 (n)
using namespace std;

int main()
{

    map < int, bool > vis;

    vector < int > v = {2, 2, 1, 1, 3};

    for ( auto u : v )
        vis[u] = 1;

    for ( auto u : vis )
        cout << u.first << " " << u.second << endl;


    return 0;
}

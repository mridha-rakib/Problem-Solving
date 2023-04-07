#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector< pair < string, int> > v;

    v.push_back({"rakib", 22});
    v.push_back({"rasel", 36});
    v.push_back({"shahriar", 49});

    sort ( v.begin(), v.end() );

    for ( auto u : v  )
        cout << u.first << " " << u.second << endl;

    return 0;
}

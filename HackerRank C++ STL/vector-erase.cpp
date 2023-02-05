//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> v(n);
    for( int i = 0; i < n; i++ ) cin >> v[i];
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;

    v.erase( v.begin() + ( x - 1 ) );
    v.erase( v.begin() + ( a - 1 ) , v.begin() + ( b - 1 ) );

    cout << v.size() << endl;
    for( auto u : v )
        cout << u << " ";
    cout << endl;


    return 0;
}

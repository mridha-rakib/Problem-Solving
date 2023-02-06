//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    int n, k;
    cin >> n >> k;
    string s = "";

    for( int i = 0; i < n; i++ )
    {
        s+= char( 'a' + i % k );
    }
    cout << s << endl;

    return 0;
}

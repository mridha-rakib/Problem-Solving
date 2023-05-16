#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
vector<int>divisors[mx];

int main()
{

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ )
    {
        for ( int j = i; j <= n; j += i )
        {
            divisors[j].push_back( i );
        }
    }

    for ( int i = 1; i <= n; i++ )
    {
        for ( auto u : divisors[i] )
        {
            cout << u << " ";
        }
        cout << endl;
    }

    return 0;
}

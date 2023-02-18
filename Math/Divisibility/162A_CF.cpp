#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int> factors;

    for( int i = 2; i <= n; i++ )
    {
        while( n % i == 0){
            factors.push_back( i );
            n /= i;
        }
    }

    for( int i = 0; i < factors.size(); i++ ){
        if( i > 0 && factors[i] != factors[factors.size()]){
            cout << "*" ;
        }
        cout << factors[i];
    }

    return 0;
}

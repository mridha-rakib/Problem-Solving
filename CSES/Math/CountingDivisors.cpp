#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int countDivisors( int n )
{
    int count = 0;
    int limit = sqrt(n);

    for( int i = 1; i <= limit; i++ )
    {
        if(n % i == 0)
            count += 2;
    }

    if( limit * limit == n )
        count--;

    return count;
}

int main()
{
    optimize();

    ll t;
    cin >> t;

    while( t-- )
    {
        int n;
        cin >> n;
        cout << countDivisors(n) << endl;
    }

    return 0;
}

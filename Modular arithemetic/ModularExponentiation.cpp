#include<bits/stdc++.h>
using namespace std;

int power( int x, int y, int p )
{
    int res = 1;

    while( y > 0 )
    {
        if( y % 2 == 1 )
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res % p;
}

int main()
{

    int x, y, p;
    cin >> x >> y >> p;
    cout << power(x, y, p) << endl;

    return 0;
}

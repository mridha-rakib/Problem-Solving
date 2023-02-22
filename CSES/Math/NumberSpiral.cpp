#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli x, y;
        cin >> x >> y;

        if( x < y )
        {
            if( y & 1 )
            {
                lli  r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                lli r = (y -1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                lli r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                lli r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    return 0;
}

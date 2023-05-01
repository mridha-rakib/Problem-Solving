#include<bits/stdc++.h>
using namespace std;


void merge( int x[], int y[], int m, int n )
{
    int k = m + n + 1;

    while ( m >= 0 && n >= 0 )
    {
        if ( x[m] > y[n] )
        {
            x[k--] = x[m--];
        }
        else
        {
            x[k--] = y[n--];
        }
    }

    while ( n >= 0 )
    {
        x[k--] = y[n--]
    }

    for ( int i = 0; i < n; i++ )
        y[i] = 0;
}


void rearrange( int x[], int y[], int m, int n )
{
    if ( m == 0 )
        return;


    int k = 0;

    for ( int i = 0; i < m; i++ )
    {
        if ( x[i] != 0 )
            x[k++] = x[i];
    }

    merge( x, y, k - 1, n - 1 )

}


int main()
{

    int x[] = { 0, 2, 0, 3, 0, 5, 6, 0, 0 };
    int y[] = { 1, 8, 9, 10, 15 };

    int m = sizeof(x) / sizeof(x[0]);
    int n = sizeof(y) / sizeof(y[0]);

    rearrange(x, y, m, n);



    return 0;
}

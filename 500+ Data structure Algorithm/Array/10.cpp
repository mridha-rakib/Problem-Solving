#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge( int x[], int y[], int m, int n )
{
    for ( int i = 0; i < m; i++ )
    {
        if ( x[i] > y[0] )
        {
            swap( x[i], y[0] );
            int first = y[0];

            int k;
            for ( k = 1; k < n && y[k] < first; k++ )
            {
                y[k - 1] = y[k];
            }

            y[k - 1] = first;
        }
    }
}

int main()
{
    int x[] = { 1, 4, 7, 8, 10 };
    int y[] = { 2, 3, 9 };

    int m = sizeof ( x ) / sizeof ( x[0] );
    int n = sizeof ( y ) / sizeof ( y[0] );

    merge(x, y, m, n);

    cout << "X : ";  printArray(x, m);
    cout << endl;
    cout << "Y : ";  printArray(y, n);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

const int mx = 125;

char adjMat[mx][mx];

int main()
{
    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ )
    {
        for ( int j = 1; j <= n; j++ )
        {
            cin >> adjMat[i][j];
        }
    }

    for ( int i = 1; i <= n; i++ )
    {
        for ( int j = 1; j <= n; j++ )
        {
            cin >> adjMat[i][j];
        }
    }


    return 0;
}

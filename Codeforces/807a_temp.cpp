#include<bits/stdc++.h>
using namespace std;

const int max_n=1e3+5;
int a[max_n], b[max_n];

int main()
{
    int n;
    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> a[i] >> b[i];
        if( a[i] != b[i] )
        {
            cout << "rated" << endl;
            return 0;
        }
    }

    for( int i = 0; i < n-1; i++ )
    {
        if( a[i] < a[i + 1])
        {
            cout << "unrated" << endl;
            return 0;
        }
    }


    cout << "maybe" << endl;


    return 0;
}

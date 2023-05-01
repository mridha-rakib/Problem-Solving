#include<bits/stdc++.h>
using namespace std;

#define MX 100

int MaxElement ( int [] );
int n;

int main()
{
    int arr[MX], hstno, i;

    cin >> n;

    for ( int i = 0; i < n; i++ )
        cin >> arr[i];

    hstno = MaxElement(arr);


    return 0;
}

int MaxElement ( int arr[] )
{
    static int i = 0, hstno = -9999;

    if ( i < n )
    {

        if ( hstno < arr[i] )
            hstno = arr[i];
        i++;
        MaxElement(arr);
    }

    return hstno;
}

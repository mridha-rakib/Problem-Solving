#include<bits/stdc++.h>
using namespace std;

void zerosToEnd( int arr[], int n )
{
    int k = 0;

    while ( k < n )
    {
        if ( arr[k] == 0)
        {
            break;
        }
        else
        {
            k = k + 1;
        }
    }

    int i = k, j = k + 1;

    while( i < n && j < n )
    {
        if ( arr[j] != 0 )
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}

int main()
{
    int arr[] = { 1,2,0,0,4};
    zerosToEnd(arr, 5);


    for ( int i = 0; i < 5; i++ )
        cout << arr[i] << " ";

    return 0;
}

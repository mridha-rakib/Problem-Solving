#include<bits/stdc++.h>
using namespace std;

void findAllcombinations ( vector < int > &arr, int x, int n )
{
    if ( x > n )
    {
        for ( auto i : arr )
            cout << i << " ";
        cout << endl;

        return;
    }

    for ( int i = 0; i < 2 * n; i++ )
    {
        if ( arr[i] == -1 && ( i + x + 1 ) < 2 * n )
    }


}

int main()
{
    int n;
    cin >> n;

    vector <int> arr ( 2 * n, - 1 );

    int x = 1;
    findAllcombinations ( arr, x, n );

    return 0;
}

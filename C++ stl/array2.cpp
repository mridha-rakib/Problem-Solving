#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 3, 4, 5, 6};

    for ( auto it = arr.begin(); it != arr.end(); it++ )
        cout << *it << " ";
    cout << endl;
    for ( auto it = arr.rbegin(); it != arr.rend(); it++ )
        cout << *it << " ";
    cout << endl;

    for ( auto it = arr.end() - 1; it >= arr.begin(); it-- )
        cout << *it << " ";

    // foreach
    cout << endl;
    for ( auto i : arr )
        cout << i << " ";

    cout << endl << endl;

    cout << arr.size() << endl;
    cout << arr.front() << endl; // arr.at(0);
    cout << arr.back() << endl;  // arr.at( arr.size() - 1 );


    /// Array max size will 10^6 --> int, double, char
    int arr[1000000]

    /// array max size 10^7 --> boolean
    bool arr[10000000];
    /// and globaly it will be 10^8

    ///segmentation fault if you push_bak 10^7 times


    return 0;
}

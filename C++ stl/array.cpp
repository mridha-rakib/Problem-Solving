#include<bits/stdc++.h>
using namespace std;


int main()
{
    array<int, 3>arr = {0, 0, 0};
    array<int, 5>ar = {1, 5, 0, 0, 0};

    int arr2[100] = {1};
//    for ( int i = 0; i < 100; i++ )
//        cout << arr[i] << " ";


    array <int, 5> arr3;
    arr3.fill(10); // -> 10, 10, 10, 10, 10

    // Array index
//    arr3.at( index );

    for ( int i = 0; i < 5; i++ )
    {
        cout << arr3.at(i) << " ";
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int data[5], i;

    for ( i = 0; i < 5; i++ )
    {
//        scanf( "%d", data+i);
        cin >> *(data + i);
    }

    for ( int i = 0; i < 5; i++ )
    {
        cout << *(data + i) << endl;
    }

    return 0;
}

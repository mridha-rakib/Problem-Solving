#include<bits/stdc++.h>
using namespace std;

int digitSum( int n )
{
    if ( n == 0 )
        return 0;
    return ((n % 10) + digitSum( n / 10 ));

}

int main()
{


    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;

        cout << digitSum( n );
    }

    return 0;
}

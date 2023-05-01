#include<bits/stdc++.h>
using namespace std;

//int term;
//
//int naturalNumber ( int term, int n )
//{
//    if ( n <= term )
//    {
//        cout << n << " ";
//        naturalNumber( term, n + 1 );
//    }
//}

int nthSum( int n )
{
    int sum;
    if ( n == 0 )
        return 0;
    else
    {
        sum = n + nthSum( n - 1 );
    }
    //cout << sum << endl;

    return sum;
}

int main()
{


    int t;
    cin >> t;
    while ( t-- )
    {
        //int n;
        //cin >> term;
        //naturalNumber( term, 1 );
        int n;
        cin >> n;
       cout << nthSum( n );
    }

    return 0;
}



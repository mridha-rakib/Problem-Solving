#include<bits/stdc++.h>
using namespace std;

int term;

int fibonacci ( int prno, int num )
{
    static int i = 1;
    int nxtNo;

    if ( i == term )
        return 0;
    else
    {
        nxtNo = prno + num;
        prno = num;
        num = nxtNo;
        cout << nxtNo << " ";
        i++;

        fibonacci( prno, num );
    }

    return 0;
}


int main()
{


    int t;
    cin >> t;
    while ( t-- )
    {
        //int n;
        cin >> term;
        cout << "0 1 ";
        static int preNo = 0, num = 1;
        fibonacci( preNo, num );
    }

    return 0;
}

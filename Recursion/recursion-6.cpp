#include<bits/stdc++.h>
using namespace std;
#define MX 100

char* ReverseOfString ( char[] );

int main()
{

    char str1[MX], *revstr;

    scanf( "%s", str1);

    revstr = ReverseOfString( str1 );
    cout << revstr << endl;
    return 0;
}

char* ReverseOfString ( char str[] )
{
    static int i = 0;
    static char revstr[MX];

    if ( *str )
    {
        ReverseOfString( str + 1 );
        cout << *str << endl;
        revstr[i++] = *str;
    }
    return revstr;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 7;

    b = a ^ b ^ b ;

    a = a ^ b ^ b;

    cout << b << endl;

    cout << a << endl;


    return 0;
}

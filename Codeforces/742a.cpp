#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    if( n == 0 ) cout << 1 << endl;
    else {
    int last_digit = pow(8, (n % 4) + 4);
    cout << last_digit % 10 << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while( t-- )
    {
        int n, k;
        cin >> n >> k;

        //calculate last three digit
        int last_three_digits = 1;
        for( int i = 0; i < k; i++ )
        {
            last_three_digits = (last_three_digits * (n % 1000)) % 1000;
        }

        //calculate the first three digits of n^k

        double long_val = k * log10(n);
        double decimal_part = long_val - floor(long_val);
        int first_three_digits = pow( 10, decimal_part + 2 );

        //output the result
        cout << to_string(n).substr(0, 3) << "...";
        cout << to_string(first_three_digits).substr(1,2);
        cout << to_string(last_three_digits) << endl;
    }

    return 0;
}

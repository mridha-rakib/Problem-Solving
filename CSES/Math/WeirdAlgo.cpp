#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();

    lli n;
    cin >> n;
    cout << n << " ";
    while (n > 1)
    {
        if (n & 1)
            n = (3 * n) + 1;
        else
            n >>= 1;
        cout << n << " ";
    }
    return 0;
}

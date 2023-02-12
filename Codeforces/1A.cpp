#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    long long n, m, a;
    cin >> n >> m >> a;

    long long num_flagstones = ceil((double)n/a) * ceil((double)m/a);

    cout << num_flagstones << endl;

    return 0;
}

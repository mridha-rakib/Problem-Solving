#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;

    ll result = 1;
    for (int i = 0; i < k; i++)
    {
        result = (result * n) % mod;
    }
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}

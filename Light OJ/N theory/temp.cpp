#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int teams = 0;
    if (a == 0 || b == 0)
    {
        teams = 0;
    }
    else if (a < 4 && b < 4)
    {
        teams = 1;
    }
    else
    {
        int pr = a / 4;
        int xtr_pr = a % 4;
        int mth = b / 4;
        int xtr_mth = b % 4;
        teams = a + b;
        if (xtr_mth + xtr_pr >= 4) {
            teams += 1;
        }
    }
    cout << teams << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t-->0)
    {
        solve();
    }

    return 0;
}


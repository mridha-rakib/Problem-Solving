#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    int n = s.length();
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (s[j] == s[i - 1])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return n - dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}

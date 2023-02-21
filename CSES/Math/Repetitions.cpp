#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();
    string s;
    cin >> s;
    int n = s.length(), best = 0, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best;
    return 0;
}


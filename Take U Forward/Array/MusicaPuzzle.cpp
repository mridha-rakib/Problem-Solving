#include<bits/stdc++.h>
using namespace std;

int solve( string s, int n )
{
    unordered_map<string, int> freq;
    string tmp = "";
    for ( int i = 0; i < n - 1; i++ )
    {
        tmp += s[i];
        tmp += s[i + 1];

        freq[tmp]++;
        tmp = "";
    }

    return freq.size();
}

int main()
{

    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << solve( s, n ) << endl;
    }

    return 0;
}

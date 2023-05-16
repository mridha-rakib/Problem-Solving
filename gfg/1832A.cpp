#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve ( string str )
{
    int max_cnter = INT_MIN;

    map<char, int> cnter;

    for ( int i = 0; i < str.size(); i++ )
    {
        cnter[str[i]]++;
    }

    for ( auto i : cnter )
    {
        if ( i.second > max_cnter )
            max_cnter = i.second;
    }

    if ( max_cnter >= str.size() - 1 )
        cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    optimize();

    int tc;
    cin >> tc;

    while ( tc--> 0 )
    {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}

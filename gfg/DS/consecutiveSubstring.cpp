#include<bits/stdc++.h>
using namespace std;

void printDistinctSubstr( string str )
{
    map<pair<char, char>, int> dpairs;

    for ( int i = 0; i < str.size() - 1; i++ )
    {
        dpairs[make_pair(str[i], str[i + 1])]++;
    }

    for ( auto it = dpairs.begin(); it != dpairs.end(); it++ )
    {
        cout << it->first.first << it ->first.second << "-" << it->second << " ";
    }

}


int main()
{
    string str = "abcacdcacabacaassddssklac";
    printDistinctSubstr(str);

    return 0;
}

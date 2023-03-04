#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string gs = "meow";
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string st = "";
        for( int i = 0; i < n; i++)
        {
            if(s[i] != s[i + 1])
                st += s[i];
        }

        if(st == "meow") cout << "Yes" << endl;
        else cout << "No" << endl;

    }

    return 0;
}

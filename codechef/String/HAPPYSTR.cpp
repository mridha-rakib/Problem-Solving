#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int count = 0;
        for(int j = 0; j < s.length(); j++)
        {
           if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u' or
               s[j]=='A' or s[j]=='E' or s[j]=='I' or s[j]=='O' or s[j]=='U')
            {
                count++;
                if(count > 2)
                {
                    cout << "Happy\n";
                    break;
                }
            }
            else count = 0;
        }

        if( count < 2) cout << "Sad\n";
    }

    return 0;
}

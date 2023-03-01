#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int  start = 0, limit = 0;
        for(int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            if(s == "START38") start++;
            else limit++;
        }
        cout << start << " " << limit << endl;
    }


    return 0;
}



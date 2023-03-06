#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string duplicate = s;

        sort(duplicate.begin(), duplicate.end());
        if(s == duplicate) cout << "YES" << endl;
        else
        {
            int st = 0;
            int end = n - 1;

            while(st < end )
            {
                if(s[st] > s[end])
                {
                    swap(s[st], s[end]);
                }
                st++;
                end--;
            }

            if(s == duplicate) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}

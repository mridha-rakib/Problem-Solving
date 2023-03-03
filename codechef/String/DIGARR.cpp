#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '5' || s[i] == '0')
            {
                cout << "Yes" << endl;
                break;
            }
            else
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "No" << endl;
        }
        count = 0;
    }

	return 0;
}



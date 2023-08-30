#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int abCnt = 0, baCnt = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'a' && str[i + 1] == 'b') abCnt++;
            else if (str[i] == 'b' && str[i + 1] == 'a') baCnt++;
        }
        if (abCnt == baCnt) cout << str << endl;

        if (abCnt > baCnt) {
            str[0] = 'b';
            cout << str << endl;
        }
        else if (baCnt > abCnt)
        {
            str[0] = 'a';
            cout << str << endl;
        }
    }

    return 0;
}


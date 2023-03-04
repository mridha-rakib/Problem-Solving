#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        string s;
        cin >> n >> x >> y >> s;

       int cnt = count(s.begin(), s.end(), '1');

       if(cnt == 0 || n - cnt == 0) cout << 0 << endl;
       else cout << (x <= y ? x : y) << endl;
    }

    return 0;
}


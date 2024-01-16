#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t --> 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap (a, b);
        int minimumCnt = 0;
        while (a < b)
        {
            a = a + c;
            b = b - c;
            minimumCnt++;
            if ((b - a) < c && (b - a) > 0)
            {
                minimumCnt++;
                break;
            }
        }

        cout << minimumCnt << endl;
    }

    return 0;
}

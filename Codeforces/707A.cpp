#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n, m;
    bool colored = false;
    char c;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                colored = true;
            }
        }
    }

    if (colored)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }

    return 0;
}


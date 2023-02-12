#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    bool flag = true;
    char d1 = a[0][0], d2 = a[0][n-1], other = a[0][1];

    for(int i = 0; i < n; i++)
    {
        if(a[i][i] != d1 || a[i][n-1-i] != d2)
            flag = false;

        for(int j = 0; j < n; j++)
        {
            if(i != j && i+j != n-1 && a[i][j] != other)
                flag = false;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

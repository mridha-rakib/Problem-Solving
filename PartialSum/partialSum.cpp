#include<bits/stdc++.h>
using namespace std;

const int Nmax = 100001;

int a[Nmax], n;
long long s[Nmax];

void buildPartialSums () {
    s[0] = a[0];

    for (int i = 1; i < n; i++) {
        s[i] = s[i - 1] + a[i];
    }
}

long long Query(int Left, int Right) {
    return (Left > Right) ? 0 : (s[Right - 1] -  s[Left - 1]);
}


int main()
{

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    buildPartialSums();

    int m;
    cin >> m;

    for(int i = 1; i <= m; i++) {
        int Left, Right;
        cin >> Left >> Right;
        cout << Query(Left, Right) << endl;
    }


    return 0;
}

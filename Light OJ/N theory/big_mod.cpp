#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mod(int a, int b, int c)
{
    if(b==0) return 1;

    if(b%2==0)
    {
        int x = mod (a, b/2, c);
        cout <<"x : " << x << endl;
        return ((x % c) * (x % c)) % c;
    }
    else
    {
        int x = mod (a, b - 1, c);
        cout << "Else x: " << x << endl;
        return ((a % c) * (x % c)) % c;
    }
}

int main()
{
//    int B, P, M;
//    while(scanf("%d %d %d", &B, &P, &M) == 3)
//    {
//        printf("%lld\n", mod(B, P, M));
//    }

    cout << mod (5, 6, 500) << endl;
    return 0;
}

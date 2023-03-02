//Bismilahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    long long int n;
    cin>>n;


    if(n%2==0)
        cout<<n/2<<endl;
    else cout<<-(n+1)/2<<endl;

    return 0;
}

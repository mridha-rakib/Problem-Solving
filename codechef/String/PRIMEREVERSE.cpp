#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T, N;
    cin>>T;
    string A = "", B = "";
    while(T > 0)
    {
        cin>>N;
        cin>>A>>B;
        if( count(A.begin(), A.end(), '1') ==  count(B.begin(), B.end(), '1') ) // counting the number of 1s in both strings
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        T--;
    }
    return 0;
}

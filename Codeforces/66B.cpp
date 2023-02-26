#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1 ;
    vector <int> vec, vecm ;
    cin>>n ;
    for(int i=0 ; i<n ; i++)
    {
        int in ;
        cin>>in ;
        vec.push_back(in) ;
    }
    for(int i=0 ; i<n ; i++)          // i = 1
    {
        for(int j=i+1 ; j<n ; j++ )   // j = 2 , j = 3
        {
            if(vec[j-1]>=vec[j])      // vec[1]>=vec[2] ==> true , vec[2]>=vec[3] ==> fales
                cnt++ ;               // cnt=2
            else
                break ;               // break
        }
        for(int j=i-1 ; j>=0 ; j--)   // j = 0
        {
            if(vec[j+1]>=vec[j])      // vec[1]>=vec[0] ==> true
                cnt++ ;               // cnt=3
            else
                break ;
        }
        vecm.push_back(cnt) ;
        cnt=1 ;
    }
    int mx = *max_element(vecm.begin(),vecm.end()) ;
    cout<<mx ;
    return 0;
}


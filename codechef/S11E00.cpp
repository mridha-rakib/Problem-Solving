#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NUM 400001
vector<ll> row_sum[640];
vector<ll> grid[640];
void complete_grid()
{
    for(ll i=0; i<640; i++)
    {
        ll cols=ceil(NUM/(i+1));
        grid[i].push_back((i+1)*(i+2)/2);
        if(row_sum[i].size()>0)
        {
            row_sum[i].push_back(row_sum[i].back()+grid[i].back());
        }
        else
        {
            row_sum[i].push_back(grid[i].back());
        }
        for(ll j=1; j<=cols; j++)
        {
            grid[i].push_back(grid[i][j-1]+i+j);
            row_sum[i].push_back(row_sum[i].back()+grid[i].back());
        }
    }
}
pair<ll,ll> find_sum(ll r,ll c,ll X)
{
    ll sum_below_median=0;
    ll total_sum=0;
    for(int i=0; i<r; i++)
    {
        ll k=upper_bound(grid[i].begin(),grid[i].begin()+c,X)-grid[i].begin();
        total_sum+=row_sum[i][c-1];
        if(k>=1)       sum_below_median+=row_sum[i][k-1];
    }
    return{sum_below_median,total_sum};
}
int main()
{
    int t;
    complete_grid();
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll r=sqrt(n);
        while(n%r!=0)
        {
            r--;
        }
        ll c=n/r;
        ll thresh=(n+1)/2;
        ll mini=1;
        ll maxi=INT_MIN;
        for(int i=0; i<r; i++)
        {
            if(grid[i][c-1]>maxi)
            {
                maxi=grid[i][c-1];
            }
        }
        while(mini<maxi)
        {
            ll mid=mini+((maxi-mini)/2);
            ll pos=0;
            for(int i=0; i<r; i++)
            {
                pos+=upper_bound(grid[i].begin(),grid[i].begin()+c,mid)-grid[i].begin();
            }
            if(pos<thresh)
            {
                mini=mid+1;
            }
            else
            {
                maxi=mid;
            }
        }
        ll X=mini;
        pair<ll,ll> p=find_sum(r,c,X);
        ll sum_below_median=p.first;
        ll sum_above_median=p.second-p.first;
        ll y=(n+1)/2;
        ll ans=((y*X)-sum_below_median+sum_above_median-((n-y)*X));
        cout<<ans%1000000007<<endl;
    }
    return 0;
}

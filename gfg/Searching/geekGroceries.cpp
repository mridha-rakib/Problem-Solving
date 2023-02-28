#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

bool cmp(pair<string, int> a, pair<string, int>b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void printKCheapestProducts(vector<pair<string, int>> &products, int k)
{
    sort(products.begin(), products.end(), cmp);

    for( int i = 0; i < k; i++ )
    {
        cout << products[i].first << " ";
    }
    cout << endl;

}


int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        int n, k;
        cin >> n >> k;

        vector<pair<string, int>> products;

        for(int i = 0 ; i < n ; i++)
        {
            string name;
            int price;
            cin >> name >> price;
            products.push_back({name, price});
        }

        printKCheapestProducts(products, k);
    }


    return 0;
}

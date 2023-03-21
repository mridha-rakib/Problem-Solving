#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    map<int, int> freq;
    vector<int>order;

    int n;

    while(cin >> n)
    {
      if ( freq.count(n) == 0)
      {
          freq[n] = 1;
          order.push_back(n);
      }
      else
      {
          freq[n]++;
      }
    }

    for ( int i = 0; i < order.size(); i++ )
    {
        cout << order[i] << " " << freq[order[i]] <<endl;
    }

    return 0;
}

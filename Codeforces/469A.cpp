#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    set<int>s;

    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

     s.size()==n?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
     cout<<endl;

    return 0;
}

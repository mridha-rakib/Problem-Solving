//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    vector < int > v (n);

    for( int i = 0; i < n; i++ )
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    for ( int i = 0; i < q; i++ )
    {

        int x;
        cin >> x;

//        vector<int> :: iterator it;
//
//        it = lower_bound( v.begin(), v.end(), x );
//
//        if( *(it + 1) == x || *it == x){
//            cout << "Yes " << it-v.begin() + 1 << endl;
//        }
//        else {
//                cout << "No " << it - v.begin() + 1 << endl;
//        }

        int index = lower_bound ( v.begin(), v.end(), x ) - v.begin();

        if( v[index] == x )cout <<"Yes ";
        else cout << "No ";
        cout << index + 1 << endl;

    }


    return 0;
}


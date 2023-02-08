///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define optimeze() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{

    int n, b, next;
    cin >> n;
    next = n;

    vector< int > v( n );

    for( int i = 1; i <= n; i++ )
    {
        cin >> b;
        v[b] = 1;

        while( v[next] == 1 )
        {
            cout << next << " ";
            next--;

        }
         cout << endl;
    }

    return 0;
}



//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector <int > a(n);
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    sort( a.begin(), a.end(), greater<int>());
//
//    stack<int> s;
//    for (int i = 0; i < n; i++) {
//        while (!s.empty() && s.top() > a[i]) {
//            s.pop();
//        }
//        s.push(a[i]);
////        cout << s.size() << " ";
//        for (int j = 0; j < s.size(); j++) {
//            cout << s.top() << " ";
//            s.pop();
//        }
//        cout << endl;
//    }
//    return 0;
//}


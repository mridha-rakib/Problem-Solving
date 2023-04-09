#include<bits/stdc++.h>
using namespace std;

int main()
{
//    priority_queue<int>q;
    priority_queue<int, vector<int>, greater<int>>q;
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>qq;
      priority_queue<pair<int, int>>qq;
//    q.push(1);
//    q.push(2);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(6);
    qq.push({1, 2});
    qq.push({2, 2});
    qq.push({2, 3});
    qq.push({3, 4});
    qq.push({6, 7});
    qq.push({4, 5});


    while( !qq.empty() )
    {
        cout << qq.top().first << " " << qq.top().second <<endl;
        qq.pop();
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{

    deque<int>dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);

    cout << dq.front() <<" " << dq.back() << endl;
    dq.pop_front();
    cout << dq.front() << " " << dq.back() << endl;
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<list<pair<int, int>>>bucket(n);
     bucket[0].emplace_back(1, 100);
     bucket[1].emplace_back(2, 200);
     bucket[1].emplace_back(3, 300);
     bucket[1].emplace_back(4, 400);
     bucket[2].emplace_back(5, 500);
     bucket[3].emplace_back(6, 600);
     bucket[4].emplace_back(7, 700);
     bucket[5].emplace_back(8, 800);
     bucket[6].emplace_back(9, 900);
     bucket[7].emplace_back(10,456);

     auto& ajaira = bucket[1];

     for (auto& val : ajaira) {
        cout << val.first << " " << val.second << endl;
     }


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;

    for (int i = 0; i < n - 1; i++) {
        int cnt = arr[i] ^ arr[i + 1];
        s.push(cnt);
    }

    int max_val = s.top();

    while (!s.empty()) {
        int cur_val = s.top();
        max_val = max(max_val, cur_val);
        s.pop();
    }

    cout << max_val << endl;

    return 0;
}

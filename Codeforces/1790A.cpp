#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;
        int len = n.length();
        string pi = "314159265358979323846264338327950";
        int i = 0;
        while (i < len && i < 30 && n[i] == pi[i]) {
            i++;
        }
        cout << i << endl;
    }
    return 0;
}


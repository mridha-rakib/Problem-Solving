#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = 0;
    while (x != 1) {
        if (x % 3 == 0) {
            x /= 3;
        } else if (x % 3 == 1) {
            x--;
        } else {
            x++;
        }
        steps++;
    }

    cout << steps << std::endl;
    return 0;
}


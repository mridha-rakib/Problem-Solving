#include<bits/stdc++.h>
using namespace std;

void swap (int &x, int &y) {
    if (x != y) {
        x = x ^ y;
        y = x ^ y;
    }
}

int main() {

    int x = 3, int y = 4;

    cout << "Before swap" << x << " " << y << endl;
    swap(x, y);
    cout << "after swap" << x << " " << y << endl;

return 0;
}

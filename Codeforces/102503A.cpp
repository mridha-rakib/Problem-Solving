#include<bits/stdc++.h>
using namespace std;


int main() {
    int v, a, r, p, h;
    cin >> v >> a >> r >> p >> h;

    int heights[4] = {v, a, r, p};
    sort(heights, heights + 4); // sort the heights in increasing order

    bool can_ride = false;
    for (int i = 0; i < 2; i++) {
        int height_sum = heights[i] + heights[i+1] + heights[i+2];
        if (height_sum >= h) { // if the sum is greater than or equal to the height required to ride
            can_ride = true;
        }
    }

    if (can_ride) {
        cout << "WAW" << endl;
    } else {
        cout << "AWW" << endl;
    }

    return 0;
}

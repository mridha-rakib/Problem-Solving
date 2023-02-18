#include<bits/stdc++.h>
using namespace std;

// Returns the sum of the proper divisors of n.
int sum_proper_divisors(int n) {
    int sum = 1; // Start with 1 as a divisor.
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i*i != n) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int n;
    while (cin >> n) {
        int sum = sum_proper_divisors(n);
        cout << n << " ";
        if (sum == n) {
            cout << "perfect";
        } else if (sum >= n-2 && sum <= n+2) {
            cout << "almost perfect";
        } else {
            cout << "not perfect";
        }
        cout << endl;
    }
    return 0;
}


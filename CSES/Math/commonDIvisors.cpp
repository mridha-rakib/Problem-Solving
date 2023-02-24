#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int maxGcd(int arr[], int n) {
    int max_gcd = 0;

    // Find the maximum value in the array
    int max_val = *max_element(arr, arr + n);

    // Count the number of occurrences of each value from 1 to max_val
    int count[max_val + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Compute the greatest common divisor for all multiples of each value
    for (int i = 1; i <= max_val; i++) {
        int divisors = 0;
        for (int j = i; j <= max_val; j += i) {
            divisors += count[j];
        }
        if (divisors > 1) {
            max_gcd = max(max_gcd, i);
        }
    }

    return max_gcd;
}


int main() {
    optimize();

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_gcd = maxGcd(arr, n);

    cout << max_gcd << endl;
    return 0;
}


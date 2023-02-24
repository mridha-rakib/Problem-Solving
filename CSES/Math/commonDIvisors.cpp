#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int countDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    return divisors.size();
}

int main() {
    optimize();
    int n;
    cin >> n;

    int divisors = countDivisors(n);

    cout << "The number of divisors of " << n << " is " << divisors << endl;

    return 0;
}


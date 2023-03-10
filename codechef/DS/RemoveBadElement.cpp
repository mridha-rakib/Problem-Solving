#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--)
    {
       int n;
       cin >> n;
       vector<int> arr(n);

       for (int i = 0; i < n; i++)
        cin >> arr[i];

       vector<int>cnt(n + 1);

       for(int i = 0; i < n; i++)
       {
           cnt[arr[i]]++;
       }

       sort( cnt.begin(), cnt.end(), greater<int>());

       cout << n - cnt[0] << endl;

    }

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.size();
        int abCnt = 0, baCnt = 0;

        for (int i = 0; i < n - 1; i++) {
            if (str[i] == 'a' && str[i + 1] == 'b') abCnt++;
            else if (str[i] == 'b' && str[i + 1] == 'a') baCnt++;
        }

        char charToChange = (abCnt > baCnt) ? 'a' : 'b';
        for (int i = 0; i < n - 1; i++) {
            if ((str[i] == 'a' && str[i + 1] == 'b') || (str[i] == 'b' && str[i + 1] == 'a')) {
                str[i] = charToChange;
                break;
            }
        }
        cout << str << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool isSubset (int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr2[i] == arr1[j]) {
                break;
            }
        }
        if (i == m) return false;
    }
    return true;
}

int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1, 4 };

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[]");

    getchar();
    return 0;

    return 0;
}


#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int minimumCnt = 0;
        while (a < b) {
            a = a + c;
            b = b - c;
            minimumCnt++;

            if ((b - a) < c && (b - a) > 0) {
                minimumCnt++;
                break;
            }
        }

        printf("%d\n", minimumCnt);
    }

    return 0;
}

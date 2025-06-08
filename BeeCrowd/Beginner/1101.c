#include <stdio.h>
int main() {
    long long int x, y, ans;
    long long int start, end;
    for (int j = 1; j != 0; j++) {
        scanf("%lld %lld", &x, &y);
        if (x == 0 || y == 0 || x < 0 || y < 0) {
            break;
        }
        if (x > y) {
            start = y;
            end = x;
        } else {
            start = x;
            end = y;
        }
        ans = 0;
        long long int i = start;
        while (i <= end) {
            printf("%lld ", i);
            ans = ans + i;
            i++;
        }
        printf("Sum=%lld\n", ans);
    }
    return 0;
}

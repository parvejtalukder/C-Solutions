#include <stdio.h>
long long int sum(long long int x, long long int y);
int main() {
    long long int t;
    long long int x, y, temp, ans;
    scanf("%d", &t);
    while (t>0) {
    scanf("%d %d", &x, &y);
    if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }
    ans = sum(x, y);
    printf("%d\n", ans);
    t--;
    }
    return 0;
}
long long int sum(long long int x, long long int y) {
    long long int i;
    long long int xySum = 0;
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            xySum = xySum + i;
        }
    }
    return xySum;
}

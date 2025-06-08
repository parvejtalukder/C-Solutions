#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    scanf("%d", &n);
    for (i; i <= n; i++) {
            sum = sum + i;
            b++;
        if (sum > n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
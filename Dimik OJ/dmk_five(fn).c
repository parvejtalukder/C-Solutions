#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
            printf("\n");
        }
        if (k != t) {
            printf("\n");
        }
    }
    return 0;
}

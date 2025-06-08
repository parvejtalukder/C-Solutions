#include <stdio.h>

int main() {
    long long int x, y;
    while (1) {
        scanf("%lld %lld", &x, &y);
        if (x == y) break;
        if (x < y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }
    return 0;
}

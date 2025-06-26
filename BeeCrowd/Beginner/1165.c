#include <stdio.h>
int main() {
    int test;
    scanf("%d", &test);
    if (test >= 1 && test <= 100) {
        while(test--) {
            long long int num, i = 1, n = 0;
            scanf("%lld", &num);
            if (num >= 1 && num <= 10000000) {
                while(i <= num) {
                    if (num % i == 0) {
                        n++;
                    }
                    i++;
                }
            }
            if (n == 2) {
                printf("%lld eh primo\n", num);
            } else {
                printf("%lld nao eh primo\n", num);
            }
        }
    }
    return 0;
}
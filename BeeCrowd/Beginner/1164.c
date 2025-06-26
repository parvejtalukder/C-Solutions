#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    if (test >= 1 && test <= 100) {
        while (test--) {
            int x, i = 1;
            int sum = 0;
            scanf("%d", &x);

            if (x >= 1 && x <= 100000000) {
                while (i < x) {
                    if (x % i == 0) { 
                        sum += i;
                    }
                    i++;
                }

                if (sum == x) {
                    printf("%d eh perfeito\n", x); 
                } else {
                    printf("%d nao eh perfeito\n", x); 
                }
            }
        }
    }

    return 0;
}

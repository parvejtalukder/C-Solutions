#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        printf("\n");
        for (j = 1; j <= i; j++) {
            printf("*");
        }
    }
    return 0;
}

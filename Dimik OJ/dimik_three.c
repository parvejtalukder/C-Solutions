#include <stdio.h>

int main() {
    for (int i = 1000; i >= 1; i--) {
        printf("%d", i);
        if (i % 5 == 1) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    return 0;
}
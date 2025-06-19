#include <stdio.h>
int main() {
    parvej();
    return 0;
}
void parvej() {
    int num, sum = 1, p;
    for (num = 1; num<=10; num++) {
        printf("0\n%d\n", sum);
        if (sum == 1) {
            printf("%d\n", sum);
            sum = p;
            continue;
        }
        sum = sum + p;

    }
}

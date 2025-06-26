#include <stdio.h>

int main() {
    int x, t, sum, count;

    while (1) {
        scanf("%d", &x);
        if (x == 0)
            break;

        sum = 0;
        count = 0;
        for (t = x; count < 5; t++) {
            if (t % 2 == 0) {
                sum += t;
                count++;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}

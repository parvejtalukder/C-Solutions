#include <stdio.h>
// My CODE BY PHT
int main() {
    int x, count, sum, i;
    while (1) {
        scanf("%d", &x);
        if (x == 0)
            break;
        if (x % 2 != 0) {
            x++;  
        }
        sum = 0;
        for (count = 0; count < 5; count++) {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}

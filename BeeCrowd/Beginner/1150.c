#include <stdio.h>
int main() {
    int X, Z, sum = 0, count = 0;
    scanf("%d", &X);
    do {
        scanf("%d", &Z);
    } while (Z <= X);

    int i = X;
    while (sum < Z) {
        sum += i;
        count++;
        i++;
    }
    printf("%d\n", count);
    return 0;   
}
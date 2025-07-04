#include <stdio.h>

int main() {
    int i, number;
    int max = 0;
    int position = 0;

    for(i = 1; i <= 100; i++) {
        scanf("%d", &number);
        if(number > max) {
            max = number;
            position = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", position);

    return 0;
}

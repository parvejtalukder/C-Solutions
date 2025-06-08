#include <stdio.h>
int main() {
    int point_one, point_two;
    while (1) {
        scanf("%d %d", &point_one, &point_two);
        if (point_one == 0 && point_two == 0) {
            break;
        } else {
            if (point_one > 0 && point_two > 0) {
            printf("primeiro\n");
        } else if (point_one < 0 && point_two > 0) {
            printf("segundo\n");
        } else if (point_one < 0 && point_two < 0) {
            printf("terceiro\n");
        } else if (point_one > 0 && point_two < 0) {
            printf("quarto\n");
        } else {
        }
    }
        }
    return 0;
}

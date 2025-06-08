#include <stdio.h>

int main() {
    int roll[] = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10};
    int num = 8;

    int size = sizeof(roll) / sizeof(roll[0]);
    int found = 0;
    int found_index = -1;

    for (int i = 0; i < size; i++) {
        if (roll[i] == num) {
            found = 1;
            found_index = i;
            break;
        }
    }

    if (found == 1) {
        printf("%d is found in the roll sheet. It is at index %d.\n", num, found_index);
    } else {
        printf("%d is not in this roll sheet.\n", num);
    }

    return 0;
}

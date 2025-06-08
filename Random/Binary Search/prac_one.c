#include <stdio.h>
int main() {
    int roll[] = {0,1,2,4,5,6,7,8,9,10};
    int mid, low = 0, high = 9;
    int num = 7;

    while (low <= high) {
        mid = ((low + high) / 2);
        if (num == roll[mid]) {
            break;
        } if (num < roll[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (low > high) {
        printf("%d is not in this roll sheet.\n", num);
    } else {
        printf("%d is found in the roll sheeet, It is the %dth element of the roll sheet.\n", roll[mid], mid);
    }
    return 0;
}

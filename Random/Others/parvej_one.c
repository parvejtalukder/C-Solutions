#include <stdio.h>
int sumSince(int fromN, int toN);
int main() {
    int option;
    do {
        int from, to;
            scanf("%d %d", &from, &to);
            if (from >= 1 && to <= 100) {
            int rcv = sumSince(from, to);
            printf("\nThe Sum of Num\nFrom %d to %d is = %d\n", from, to, rcv);
            } else {
            printf("\nInputs is not valid as our conditions!\n");
            }
                do {
                    printf("\nWant to run again? (1-Yes|2-No)\n");
                    scanf("%d", &option);
                    }
                while (option != 1 && option != 2);

        }
        while (option == 1);

    return 0;
}
int sumSince(int fromN, int toN) {
    int i = fromN, sum = 0;
    while (i <= toN) {
        sum = sum + i;
        i++;
    }
    return sum;
}

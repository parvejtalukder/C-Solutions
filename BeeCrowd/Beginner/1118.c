#include <stdio.h>
float numCon();
int main() {
    int option;

    do {
        float numOne = numCon();
        float numTwo = numCon();
        float sum = numOne + numTwo;
        float average = sum / 2.0;

        printf("media = %.2f\n", average);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &option);
        } while (option != 1 && option != 2);

    } while (option == 1);

    return 0;
}

float numCon() {
    float num;
    while (1) {
        scanf("%f", &num);
        if (num < 0.0 || num > 10.0) {
            printf("nota invalida\n");
        } else {
            return num;
        }
    }
}

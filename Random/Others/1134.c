#include <stdio.h>

int main() {
    int num;
    int Alcool = 0;
    int Gasolina = 0;
    int Diesel = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 1) {
            Alcool++;
        } else if (num == 2){
            Gasolina++;
        } else if (num == 3) {
            Diesel++;
        } else if (num == 4) {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", Alcool);
    printf("Gasolina: %d\n", Gasolina);
    printf("Diesel: %d\n", Diesel);

    return 0;
}

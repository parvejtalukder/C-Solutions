#include <stdio.h>
int main() {
    float Number, Avg;
    float count = 0, sum = 0;
    do {
        scanf("%f", &Number);
        if (Number < 0.00) {
            break;
        }
        sum = sum + Number;
        count = count + 1;
    } while (Number > 0.00);
    Avg = sum / count;
    printf("%.2f\n", Avg);
    return 0;
}
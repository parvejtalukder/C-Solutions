#include <stdio.h>

int main() {
    float number;
    float sum = 0;
    int valid_scores_count = 0;
    while (valid_scores_count < 2) {
        scanf("%f", &number);
        if (number >= 0 && number <= 10) {
            sum = sum + number;
            valid_scores_count++;
        } else {
            printf("nota invalida\n");
        }
    }
    float average = sum / 2.0;
    printf("media = %.2f\n", average);
    return 0;
}

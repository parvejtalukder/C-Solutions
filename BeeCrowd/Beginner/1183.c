#include <stdio.h>

int main() {
    char op;
    scanf(" %c", &op); 
    float arr[12][12];
    float sum = 0;
    int avgC = 0;

    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%f", &arr[i][j]);  
        }
    }

    for(int i = 0; i < 12; i++) {
        for(int j = i+1; j < 12; j++) {
            sum += arr[i][j];
            avgC++;
        }
    }

    if (op == 'S') {
        printf("%.1f\n", sum);
    } else if (op == 'M') {
        float avg = sum / avgC;
        printf("%.1f\n", avg);
    }

    return 0;
}

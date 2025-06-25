#include <stdio.h>

int main() {
    float sum = 0.0f;
    int i;

    for(i = 1; i <= 100; i++) {
        sum += 1.0f / i;  
    }

    printf("%.2f\n", sum);  
    return 0;
}

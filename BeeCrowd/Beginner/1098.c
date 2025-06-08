#include <stdio.h>
int main() {
    float i, j;
    for (i = 0; i <= 2; i =i+0.2) {
        for (j = 1 + i; j <= 3 + i; j+=i) {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}

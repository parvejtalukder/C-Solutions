#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int N[10];
    scanf("%d", &n);
    for(int i = 0; i < 10; i++) {
        N[i] = n * (int)pow(2, i);
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
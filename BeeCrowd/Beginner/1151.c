#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    int a = 0;
    int b = 1;
    int next_fibo; 
    if (N == 1) {
        printf("0\n"); 
    } else if (N > 1 && N < 46) {
        printf("%d %d", a, b);
        for (int i = 2; i < N; i++) {
            next_fibo = a + b;
            printf(" %d", next_fibo); 
            a = b;                 
            b = next_fibo;         
        }
        printf("\n"); 
    }
    return 0;
}
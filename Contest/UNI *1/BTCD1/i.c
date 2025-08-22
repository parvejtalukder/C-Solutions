#include <stdio.h>
int main() {
    long long int n;
    scanf("%d", &n);
    long long int d, sum = 0;
    while(n != 0) {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("%d\n", sum);
    return 0;
}

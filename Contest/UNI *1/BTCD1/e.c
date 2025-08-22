#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int area = a * b;
    int perm = 2 * (a+b);
    printf("%d %d\n", area, perm);
    return 0;
}
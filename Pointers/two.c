#include <stdio.h>
int main() {
    int a = 5;
    int *b = &a;
    printf("%p\n", b);
    printf("\n");
    printf("\n");
    printf("%d\n", &a);
    return 0;
}
#include <stdio.h>
int main() {
    int num[] = {1, 2, 3, 4, 5};
    *num = 2;
    printf("%p", *num);
    return 0;
}
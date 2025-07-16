#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (a == 'z') {
        printf("a\n");
    } else {
        a = a + 1;
        printf("%c\n", a);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int t;
    char num[101];
    scanf("%d", &t);
    if (1 <= t && t <= 100) {
        int i = 1;
        while (i<=t) {
        scanf("%s", &num);
        if (num % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
            }
        i++;
        }
    }
    return 0;
}

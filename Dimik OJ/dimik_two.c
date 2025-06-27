#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char num[101];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", num);
        int len = strlen(num);
        char last = num[len - 1];
        if (last == '0' || last == '2' || last == '4' || last == '6' || last == '8') {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }

    return 0;
}

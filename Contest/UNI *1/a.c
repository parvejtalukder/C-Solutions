#include <stdio.h>
int main() {
    char a[3];
    scanf("%s", a);
    int s = sizeof(a)/sizeof(a[0]);
    if (a[0] == '\0') {
        printf("Error\n");
    } else if (a[1] == '\0') {
        for(int i = 0; i < 6; i++) {
            printf("%c", a[0]);
        }
    } else if (a[2] == '\0') {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 2; j++) {
                printf("%c", a[j]);
            }
        }
    } else {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%c", a[j]);
            }
        }
    }
    return 0;
}
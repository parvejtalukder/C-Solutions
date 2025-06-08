#include <stdio.h>
int chaNam(char name[]);
int main() {
    char who[100];
    gets(who);
    int count = chaNam(who);
    printf("Ans = %d\n", count);
    return 0;
}
int chaNam(char name[]) {
    int i, j = 0;
    for (i = 0; name[i] != '\0'; i++) {
        j++;
    }
    return j;
}

#include <stdio.h>
int main() {
    char name[] = "Md Parvej Husen Talukder";
    int i, l = 0;
    for (i = 0; name[i] != '\0'; i++) {
        l++;
    }
    printf("%d", l);
    return 0;
}

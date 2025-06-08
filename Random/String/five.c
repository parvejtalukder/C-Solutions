#include <stdio.h>
int main() {
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int i, l;
    printf("%s\n", country);
    for (i = 0;i < 10; i++) {
        if (country[i] >= 97 && country[i] <= 122) {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
    return 0;
}

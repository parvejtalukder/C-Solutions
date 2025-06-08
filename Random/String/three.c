#include <stdio.h>
int main() {
    char ch = 'a';
    char upCH = 'A' + (ch - 'a');
    printf("%c\n", upCH);
    return 0;
}

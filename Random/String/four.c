#include <stdio.h>
void low2Up(char alpha);
void Up2low(char alpha);
int main() {
    char alpha;
    while (1) {
        scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z') {
        low2Up(alpha);
    }
    else {
        Up2low(alpha);
    }
    }
    return 0;
}
void low2Up(char alpha) {
    char UP = 'A' + (alpha - 'a');
    printf("%c", UP);
}
void Up2low(char alpha) {
    char LW = 'a' + (alpha - 'A');
    printf("%c", LW);
}

#include <stdio.h>
void mainW(int from, int to);
int main() {
    int x, y;
    int start, end;
    scanf("%d %d", &x, &y);
    if (x > y) {
        start = y;
        end = x;
    } else {
        start = x;
        end = y;
    }
    mainW(start, end);
    return 0;
}
void mainW(int from, int to) {
    int sum = 0, i = from + 1;
    while (i < to) {
        if (i % 5 == 3 || i % 5 == 2) {
            printf("%d\n", i);
        }
        i++;
    }
}

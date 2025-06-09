#include <stdio.h>
void sub(int from, int to);
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
    sub(start, end);
    return 0;
}
void sub(int from, int to) {
    int i, sum = 0;
    for (i = from;i <= to; i++) {
        if (i % 13 != 0) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}

#include <stdio.h>
int facto(int x);
int main() {
    int num;
    scanf("%d", &num);
    if (num < 13) {
        if (num < 0) {
    } else {
        long long result = facto(num);
        printf("%d\n", result);
    }
    }

    return 0;
}
int facto(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    else {
        return x * facto(x - 1);
    }
}

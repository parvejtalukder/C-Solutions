#include <stdio.h>
void func(long long int x);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int num;
        scanf("%lld", &num);
        func(num);
    }
    return 0;
}

void func(long long int x) {
    while (x >= 10) {
        x = x / 10;  
    }
    printf("%lld\n", x);
}
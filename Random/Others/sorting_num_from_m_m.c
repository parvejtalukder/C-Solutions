#include <stdio.h>
int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int min, mid, max;
    if (a <= b && a <= c) {
        min = a; 
        if (b <= c) {
            mid = b;
            max = c;
        } 
        else {
            mid = c;
            max = b;
        }
    } 
    else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a;
            max = c;
        }
        else {
            mid = c;
            max = a;
        }
    } 
    else {
        min = c;
        if (a <= b) {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }

    printf("%lld\n%lld\n%lld\n", min, mid, max); 
    printf("\n");
    printf("%lld\n%lld\n%lld\n", a, b, c);

    return 0;
}

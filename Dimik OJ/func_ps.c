#include <stdio.h>
int mamun(int a, int b);
int main() {
    // main == reduan
    int a, b; // Declearing 
    printf("Khadiza Duita Number Dew: ");
    scanf("%d %d", &a, &b); // Taking two num from Khadiza
    int ans = mamun(a, b); // Calling baccha
    printf("%d", &ans);
    return 0;
}
int mamun(int a, int b) {
    return a + b;  // Showing to audiance (the sum)
}
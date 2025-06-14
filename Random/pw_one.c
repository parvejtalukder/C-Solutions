#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {

    int a;
    double b;
    char p;
    char h;
    scanf("%d %c", &a, &p);
    b = cbrt(a);
    printf("%.3lf\n", sqrt(a));
    printf("%.3lf\n", b);
    h = toupper(p);
    printf("%c\n", h);
    printf("%.3lf\n", pow(a, b));

    return 0;
}

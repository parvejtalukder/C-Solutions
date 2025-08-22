#include <stdio.h>
#include <math.h>

int main() {
    int r;
    scanf("%d", &r);
    double pi = 3.1416;
    double area = (pow(r, 2) * pi);
    double circ = 2 * pi * r;
    printf("%.6f %.6f", area, circ);    
    return 0;
}
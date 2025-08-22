#include <stdio.h>
#include <math.h>
int main() {
    const double pi = acos(-1);
    int r;
    scanf("%d", &r);
    double area = (((double)r*r) * pi);
    double cic = 2 * pi * (double)r;
    printf("%.6lf %.6lf\n", area, cic);
    return 0;
}
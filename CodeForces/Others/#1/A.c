#include <stdio.h>
int main() {
    int discount;
    double paidAmount;
    double originalPrice;
    scanf("%d %lf", &discount, &paidAmount);
    if (discount < 1 || discount > 99 || paidAmount < 1 || paidAmount > 40000) {
        return 1; 
    }
    originalPrice = paidAmount / (1 - discount / 100.0);
    printf("%.2lf\n", originalPrice);
    return 0;
}

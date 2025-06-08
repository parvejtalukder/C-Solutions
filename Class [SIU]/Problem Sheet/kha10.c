#include <stdio.h>
float pri(float pri[], int n);
void display(float d, float b);
int main() {
    int n, i;
    float bdg;
    printf("Enter The Number of Products: ");
    scanf("%d", &n);
    printf("Enter The Budget (In BDT): ");
    scanf("%f", &bdg);
    float price[n]; 
    for(i = 0; i < n; i++) {
        printf("Enter The Price of Product %d: ", i + 1);
        scanf("%f", &price[i]);
    }
    float priAns = pri(price, n);
    display(priAns, bdg);
    return 0;
}
float pri(float pri[], int n) {
    float total = 0.00;
    for (int i = 0; i < n; i++) {
        total = total + pri[i];
    }
    return total;
}
void display(float d, float b) {
    if (d <= b) {
        printf("The Prices Is Within The Budget.\n");
    } else {
        printf("The Prices Is Not Within The Budget.\n");
    }
}

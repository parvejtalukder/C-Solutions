#include <stdio.h>
int fri();
float bill();
double calc(int a, int b);
int main() {
    int ans_of_of;
    float ans_of_tf;
    double ans_of_thf;
    ans_of_of = fri();
    ans_of_tf = bill();
    ans_of_thf = calc(ans_of_of, ans_of_tf);
    printf("Bill Per Friend = %.2lf", ans_of_thf);
    return 0;
}
int fri() {
    int nfr;
    printf("Enter The Number of Friends: ");
    scanf("%d", &nfr);
    return nfr;
}
float bill() {
    float nbi;
    printf("Enter The Amount of Bill: ");
    scanf("%f", &nbi);
    return nbi;    
}
double calc(int a, int b) {
    return b / a;
}
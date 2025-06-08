#include <stdio.h>
#define Dis 25

int dis(int a, int b);
void print(int a);

int main() {
    int tickPri;
    int Go;
    scanf("%d", &tickPri);
    Go = dis(tickPri, Dis);
    print(Go);
    return 0;
}

int dis(int a, int b) {
    int x = a * b / 100;
    return a - x;
}

void print(int a) {
    printf("Discount price: %d BDT\n", a);
}

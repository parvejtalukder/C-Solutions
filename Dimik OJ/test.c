#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;   // পয়েন্টার p রাখছে x-এর ঠিকানা

    printf("আগে: x = %d\n", x);

    *p = 20;  // পয়েন্টার দিয়ে x-এর মান পরিবর্তন

    printf("পরে: x = %d\n", x);
    *p = 50;
    printf("%d\n", x);

    return 0;
}

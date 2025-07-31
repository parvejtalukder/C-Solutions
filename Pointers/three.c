#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a; 
    printf("Address stored in b (which is &a): %p\n", (void *)b);
    printf("Value pointed to by b (*b): %d\n", *b);
    printf("Address of a (&a): %p\n", (void *)&a);
    printf("\n");
    return 0;
}
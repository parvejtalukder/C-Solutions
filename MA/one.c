#include <stdio.h>
#include <stdlib.h>
int main() {
    // int number[2];
    // number[1] = 10;
    // printf("Value : %d \nSize: %d\n", number[1], sizeof(number));
    // int *ptr1, *ptr2;
    // ptr1 = malloc(sizeof(*ptr1));
    // ptr2 = calloc(1, sizeof(*ptr2));
    // printf("%d %d\n", ptr1, ptr2);
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents * sizeof(*students)); 
} 
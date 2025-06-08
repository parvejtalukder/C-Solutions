#include <stdio.h>
#define N 5
int main() {
    int i;
    int marks[N];
    int high, roll;
    for(i = 0; i < N; i++) {
        printf("Marks of Roll: 4800%d \n\tEnter Here: ", i + 1);
        scanf("%d", &marks[i]); 
    }
    high = marks[0];

    for (i = 1; i < N; i++) {
        if (marks[i] > high) {
            high = marks[i];
            roll = i + 1;
        } 
    }
    printf("The Highest Marks = %d\n", high);
    printf("The Roll of The Top Scorrer = %d\n", roll);
    return 0;
}
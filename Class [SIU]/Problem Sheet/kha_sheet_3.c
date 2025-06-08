#include <stdio.h>
int pht(int a, int b);
int main() {
    int i, year = 12;
    int savMonth[year];
    int totalSav = 0, avg;
    for (i = 0; i < year; i++) {
        printf("Enter The Saving (in BDT) of Month-%d: ", i+1);
        scanf("%d", &savMonth[i]); // 0, 1, ..... 11
        totalSav = totalSav + savMonth[i];
    }
    avg = pht(totalSav, year);
    printf("The Total: %d BDT\nThe Average: %d BDT", totalSav, avg);
    return 0;
}
int pht(int a, int b) {
    return a / b;
}
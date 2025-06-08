#include <stdio.h> // Header
int main() {
    int i, DAY = 7; // Day = 7
    int walkDay[DAY]; // indx = 0 start, 7 - 1 = 6; 0, 1, 2, 3, 4, 5, 6
    int total_walk = 0, average; 
    for (i = 0; i < DAY; i++) { // 1
        printf("Enter Walking Distance of %d Day (in KM): ", i+1); ///
        scanf("%d", &walkDay[i]);
        total_walk = total_walk + walkDay[i]; // 10 + 54
    }
    average = total_walk / DAY;
    printf("\n\n\n\tTotal Distance Walked: %d KMs\n", total_walk);
    printf("\t***|| THE AVERAGE = %d KMs ||***\n", average);
    return 0;
}
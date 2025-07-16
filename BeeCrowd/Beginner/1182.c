#include <stdio.h>
double sum(double array[12][12], int colm);
double avg(double array[12][12], int colm);
int main() {
    int c;
    char t;
    double arr[12][12];
    scanf("%d", &c);
    scanf(" %c", &t);
    for(int i = 0; i < 12; i++) {
       for(int j = 0; j < 12; j++) {
        scanf("%lf", &arr[i][j]);
       } 
    }
    if (t == 'S') {
        printf("%.1lf\n", sum(arr, c));
    } else {
        printf("%.1lf\n", avg(arr, c));
    }
    return 0;
}
double sum(double array[12][12], int colm) {
    double the_sum = 0;
    for(int i = 0; i < 12; i++) {
        the_sum = the_sum + array[i][colm];
    }
    return the_sum;
}
double avg(double array[12][12], int colm) {
    double sum = 0, the_avg;
    int i, count = 0;
    for(i = 0; i < 12; i++) {
        sum = sum + array[i][colm];
    }
    the_avg = sum / 12.00;
    return the_avg;
}
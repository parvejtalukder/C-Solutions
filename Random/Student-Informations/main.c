#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "display.h"

void input();
void display();
int main()
{
    int choice;

    while (1)
    {  
        printf("----------------------------------------\n");
        printf("----------------------------------------\n");
        printf("*====|| Student Info Software ||====*\n");
        printf("1. Add New Student\n");
        printf("2. Show All Students\n");
        printf("3. Exit\n");
        printf("4. Tutorial\n");
        printf("----------------------------------------\n");
        printf("----------------------------------------\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            input();
            break;
        } else if (choice == 2) {
            display();
            break;
        } else if (choice == 3) {
            break;
        } else if (choice == 4) {
            break;
        } else {
            printf("Worning: Wrong Input, Please Try Again...\n");
        }

    }

    return 0;
}

#include "input.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input();
int main()
{
    input();
}

void input()
{
    char name[50], dept[50], university[50];
    char input[50];
    int roll, reg;
    FILE *out;

    out = fopen("information.txt", "a");
    if (out == NULL)
    {
        printf("Error opening file.\n");
    }

    printf("Notice: Type 'end' anytime to stop entering data.\n");

    while (1)
    {
        fflush(stdin);

        printf("Student Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; 
        if (strcmp(name, "end") == 0)
            break;

        printf("Roll No: ");
        scanf("%s", input);
        if (strcmp(input, "end") == 0)
            break;
        roll = atoi(input);

        printf("Registration No: ");
        scanf("%s", input);
        if (strcmp(input, "end") == 0)
            break;
        reg = atoi(input);

        getchar(); 

        printf("Department: ");
        fgets(dept, sizeof(dept), stdin);
        dept[strcspn(dept, "\n")] = '\0';
        if (strcmp(dept, "end") == 0)
            break;

        printf("University: ");
        fgets(university, sizeof(university), stdin);
        university[strcspn(university, "\n")] = '\0';
        if (strcmp(university, "end") == 0)
            break;
        printf("\n\n");

        fprintf(out, "-----------------------------\n");
        fprintf(out, "Name      : %s\n", name);
        fprintf(out, "Roll      : %d\n", roll);
        fprintf(out, "Reg.      : %d\n", reg);
        fprintf(out, "Department: %s\n", dept);
        fprintf(out, "University: %s\n", university);
        fprintf(out, "-----------------------------\n\n");
    }

    printf("\nOperation completed successfully.\n");
    fclose(out);
}

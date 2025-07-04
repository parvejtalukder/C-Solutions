#include "display.h"
#include <stdio.h>
#include <stdlib.h>
void display();
int main()
{
    display();
}
void display()
{
    FILE *in;
    char line[200];

    in = fopen("information.txt", "r"); 
    if (in == NULL)
    {
        printf("Soft. Problem...\n");
    }

    printf("Students Information:\n\n");

    while (fgets(line, sizeof(line), in) != NULL)
    {
        printf("%s", line); 
    }

    fclose(in);
}

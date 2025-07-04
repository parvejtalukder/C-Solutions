#include <stdio.h>

int main()
{
    FILE *pht;
    int a, b;
    pht = fopen("input.txt", "r");

    if (pht == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    while (fscanf(pht, "%d %d", &a, &b) == 2)
    {
        printf("Read values: %d %d\n", a, b); 
    }

    fclose(pht);
    return 0;
}

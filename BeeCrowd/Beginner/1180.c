#include <stdio.h>

int main()
{
    int how;
    scanf("%d", &how);
    int num[how]; // how much number will be taken?

    for (int i = 0; i < how; i++)
    {
        scanf("%d", &num[i]);  // taking input...
    }

    int min = num[0];
    int pos = 0;

    for (int j = 1; j < how; j++)
    {
        if (num[j] < min)
        {
            min = num[j];
            pos = j;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);
    // completed by PHT

    return 0;
}

#include <stdio.h>

int main()
{
    int tCase;
    scanf("%d", &tCase);
    while (tCase--)
    {
        int size;
        scanf("%d", &size);
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            int num;
            scanf("%d", &num);
            if (num % 2 != 0)
            {
                count += 1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    while (testCase--)
    {
        long long int size, sum = 0;
        scanf("%lld", &size);

        for (long long int i = 0; i < size; i++)
        {
            long long int x;
            scanf("%lld", &x);
            sum += x;
        }

        long long int root = sqrt(sum);
        if (root * root == sum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

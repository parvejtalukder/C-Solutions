#include <stdio.h>
int main()
{
    int row, colm;
    scanf("%d %d", &row, &colm);
    int arr[row][colm];
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < colm; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
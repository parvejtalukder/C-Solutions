#include <stdio.h>
int main()
{
    int arr[10];
    int size = 10;
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < 10; i++) {
        printf("arr[%d] is: ", i);
        printf("%d\n", arr[i]);
    }
    return 0;
}

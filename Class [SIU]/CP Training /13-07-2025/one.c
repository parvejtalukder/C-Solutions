#include <stdio.h>
int main()
{
    int arr[10];
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

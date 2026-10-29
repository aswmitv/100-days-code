#include <stdio.h>

int main()
{
    int a[100], n, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ptr = a;
    for (int i = 0; i < n; i++) {
        sum = sum + *(ptr + i);
    }

    printf("Sum = %d", sum);

return 0;
}
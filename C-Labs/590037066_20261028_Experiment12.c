#include <stdio.h>

int main()
{
    int a[100], n, temp;
    int *first, *last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    first = a;
    last = a + n - 1;

    while (first < last)
    {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }

    printf("Reversed array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

return 0;
}
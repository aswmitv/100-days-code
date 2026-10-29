#include <stdio.h>

int main() {
    int a[5] = {10,20,30,40,50};
    int *p, *p1, *p2;

    //1. Pointer Initialization
    p = a;

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    //2. Dereferencing
    printf("\n\nValue at p = %d", *p);

    //3. Pointer Increment
    p++;
    printf("\nAfter p++: %d", *p);

    //4. Pointer Decrement
    p--;
    printf("\nAfter p--: %d", *p);

    //5. Pointer Addition
    printf("\nValue at p + 3 = %d", *(p + 3));

    //6. Pointer Subtraction
    p = a + 4;
    printf("\nValue at p - 2 = %d", *(p - 2));

    //7. Difference between pointers
    p1 = &a[1];
    p2 = &a[4];

    printf("\nDifference between p2 and p1 = %td elements", p2 - p1);
    
    //8. Pointer Comparison
    if (p1 < p2)
    {
        printf("\np1 points to an earlier element than p2");
    }
    else
    {
        printf("\np1 does not points to an earlier element than p2");
    }
    
return 0;   
}
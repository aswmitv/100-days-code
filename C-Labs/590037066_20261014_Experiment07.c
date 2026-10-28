#include <stdio.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }
}

void sortArray(int merged[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (merged[j] > merged[j + 1])
            {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array: ");
    readArray(arr1, n1);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array: ");
    readArray(arr2, n2);

    mergeArrays(arr1, n1, arr2, n2, merged);
    sortArray(merged, n1 + n2);
    
    printf("Sorted merged array: ");

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

return 0;
}
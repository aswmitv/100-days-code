#include <stdio.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int findSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int i;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }

    if (i == n)
    {
        return -1;
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] != largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
return secondLargest;
}

int main()
{
    int arr[100], n, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    readArray(arr, n);

    secondLargest = findSecondLargest(arr, n);

    if (secondLargest == -1)
    {
        printf("No second-largest distinct element exists.");
    }
    else
    {
        printf("Second-largest element = %d", secondLargest);
    }

return 0;
}
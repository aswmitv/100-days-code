/* Problem statement: WAP to read n integers into an array and calculate their 
sum and average using seperate functions.
Requirements: 
- readArray() -- reads the array elements,
- calculateSum() -- returns the sum of the elements,
- calculateAverage() -- calculates and returns the average.
- Display the sum and average */

#include <stdio.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int calculateSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

float calculateAverage(int sum, int n)
{
    return (float)sum / n;
}

int main()
{
    int arr[100], n, sum;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    readArray(arr, n);

    sum = calculateSum(arr, n);
    average = calculateAverage(sum, n);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

return 0;
}
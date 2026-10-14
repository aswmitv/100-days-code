/* Problem statement: WAP to read n integers into an array and calculate their 
sum and average using seperate functions.
Requirements: 
- readArray() -- reads the array elements,
- calculateSum() -- returns the sum of the elements,
- calculateAverage() -- calculates and returns the average.
- Display the sum and average */

#include <stdio.h>

int a[100];

void readArray(int n) {
    printf("Enter %d elements: ",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

int calculateSum(int n) {
    int i, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

return sum;   
}

float calculateAverage(int sum, int n) {
    return (float)sum / n;
}

int main() {
    int n,sum;
    float average;

    printf("Number of elements: ");
    scanf("%d",&n);

    readArray(n);
    sum = calculateSum(n);
    average = calculateAverage(sum, n);

    printf("Sum= %d\n",sum);
    printf("Average= %.2f",average);

return 0;
}
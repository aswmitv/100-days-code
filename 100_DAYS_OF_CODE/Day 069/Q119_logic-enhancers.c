/* Q119: Write a program to take an integer array as input. Only one element 
will be repeated. Print the repeated element. Try to find the result in one single iteration. */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int freq[1000] = {0};

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;

        if (freq[nums[i]] == 2) {
            printf("Repeated element = %d\n", nums[i]);
            break;
        }
    }

return 0;
}
#include <stdio.h>

int findDifference(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i]; 
        } else {
            oddSum += arr[i]; 
        }
    }

    return evenSum - oddSum;
}

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int difference = findDifference(arr, n);

    printf("Difference between the sum of even and odd elements: %d\n", difference);

    return 0;
}

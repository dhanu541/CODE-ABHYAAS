#include <stdio.h>

int main() {
    int n, targetSum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int maxLength = 0; // To store the maximum subarray length
    int currentSum = 0;
    int startIndex = 0;
    int endIndex = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        while (currentSum > targetSum) {
            currentSum -= arr[startIndex];
            startIndex++;
        }

        if (currentSum == targetSum && (i - startIndex + 1) > maxLength) {
            maxLength = i - startIndex + 1;
            endIndex = i;
        }
    }

    if (maxLength > 0) {
        printf("Maximum length subarray with sum %d: ", targetSum);
        for (int i = endIndex - maxLength + 1; i <= endIndex; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("No subarray found with the given sum.\n");
    }

    return 0;
}

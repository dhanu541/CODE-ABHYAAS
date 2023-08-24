#include <stdio.h>

int main() {
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ascendingSorted = 1;  // Assume ascending sorted
    int descendingSorted = 1; // Assume descending sorted

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            ascendingSorted = 0;
        }

        if (arr[i] > arr[i - 1]) {
            descendingSorted = 0;
        }
    }

    if (ascendingSorted) {
        printf("The array is sorted in ascending order.\n");
    } else if (descendingSorted) {
        printf("The array is sorted in descending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}


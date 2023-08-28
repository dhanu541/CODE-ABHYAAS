#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int found = 0; // Flag to indicate if the element is found
    int index = -1; // To store the index of the found element

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            index = i;
            break; // Exit the loop once the element is found
        }
    }

    if (found==1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


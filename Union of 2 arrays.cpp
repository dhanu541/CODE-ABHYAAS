#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter %d integers for the first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter %d integers for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[m + n];
    int unionSize = 0;

    // Add elements from the first array to the union array
    for (int i = 0; i < m; i++) {
        unionArr[unionSize++] = arr1[i];
    }

    // Add unique elements from the second array to the union array
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            unionArr[unionSize++] = arr2[i];
        }
    }

    printf("Union of the two arrays:\n");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}

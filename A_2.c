/*Write a program to display unique element in an array.*/

#include <stdio.h>
#define MAX 10

int main() {
    int arr[MAX], i, j, n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");
    for (i = 0; i < n; i++) {
        int isUnique = 1; // Assume the element is unique
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a matching element, not unique
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]); // Print the unique element
        }
    }
    return 0;
}

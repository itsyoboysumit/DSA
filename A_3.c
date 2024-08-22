/*Wtite a program to display duplicate element in an array.*/

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

    printf("Duplicate elements are:\n");
    for (i = 0; i < n; i++) {
        int isDuplicate = 0; // Assume the element is not duplicate //here we are using flag to control iteration of loop
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isDuplicate = 1; // Found a matching element, duplicate
                break;
            }
        }
        if (isDuplicate) {
            // Check if the element is not printed before (to avoid duplicates in output)
            int isPrinted = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    isPrinted = 1;
                    break;
                }
            }
            if (!isPrinted) {
                printf("%d ", arr[i]); // Print the duplicate element with a space
            }
        }
    }
    return 0;
}

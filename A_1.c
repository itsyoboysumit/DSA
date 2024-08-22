/*Write a program to delete an element from an array.*/

#include <stdio.h>

void deleteElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid index! Index must be between 0 and %d\n", size - 1);
        return;
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array by 1
    size--;

    printf("Element deleted successfully!\nUpdated array:\n ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);

    deleteElement(arr, size, index);

    return 0;
}

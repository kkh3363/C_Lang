#include <stdio.h>

// Function to swap the values of two variables using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort on an array
void selectionSort(int arr[], int size) {
    int i, j;
    // Loop through the entire array except the last element
    for (i = 0; i < size - 1; i++) {
        // Assume the current position 'i' holds the minimum value
        int min_idx = i;

        // Loop through the remaining unsorted elements to find the actual minimum
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // Update index if a smaller element is found
            }
        }

        // Swap the found minimum element with the element at the current position 'i'
        if (min_idx != i) {
            swap(&arr[i], &arr[min_idx]);
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array:\n");
    printArray(data, size);

    // Sort the array using selection sort
    selectionSort(data, size);

    printf("\nSorted array in ascending order:\n");
    printArray(data, size);

    return 0;
}

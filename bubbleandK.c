#include <stdio.h>

// Function to perform bubble sort on the array
void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the kth smallest element in the array
int kthSmallest(int *arr, int size, int k) {
    
    // Check if k is valid
    if (k < 1 || k > size) {
        printf("Invalid value of k\n");
        return -1; // Return -1 to indicate an error
    }

    // Perform bubble sort to ensure the array is sorted
    bubbleSort(arr, size);

    // Return the kth smallest element
    return arr[k - 1];
}

int main() {
    int size, k;

    // Input: Get the size of the array from the user
    scanf("%d", &size);

    // Check if the size is valid
    if (size <= 0) {
        printf("Invalid size");
        return 1;
    }
    else {
    // Declare an array of the given size
    int arr[size];

    // Input: Get the elements of the array from the user
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Get the value of k from the user
    scanf("%d", &k);
    
    // Perform bubble sort and find the kth smallest element
    bubbleSort(arr, size);
    int result = kthSmallest(arr, size, k);

    // Display the sorted array and the kth smallest element
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (result != -1) {
        printf("%d",result);
    }
    
    return 0;
    }
}

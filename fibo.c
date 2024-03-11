#include <stdio.h>

// Function that calculates the sum of Fibonacci sequence up to a given index
int fibonacciSumArray(int arr[], int size) {
    if (size <= 0) {
        printf("INVALID INPUT SIZE!!\n");
        return 0;
    }

    arr[0] = 0;
    if (size > 1) {
        arr[1] = 1;

        // Calculating Fibonacci sequence and summing up to the given index
        int sum = arr[0] + arr[1];
        for (int i = 2; i < size; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
            sum += arr[i];
        }

        return sum;
    } else {
        return arr[0];
    }
}

int main() {
    int n;

    // Input: Get the index from the user
    scanf("%d", &n);

    // Check if n is valid
    if (n <= 0) {
        printf("INVALID INPUT SIZE!!\n");
        return 1;
    }

    // Create an array to store Fibonacci sequence
    int fibonacciArray[n];

    // Calculate and display the sum of Fibonacci sequence up to index n
    int sum = fibonacciSumArray(fibonacciArray, n);

    
    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonacciArray[i]);
    }

    printf("\n%d", sum);

    return 0;
}

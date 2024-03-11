#include <stdio.h>

// Function to reverse the digits in each number
void reverseDigits(int *numbers, int size) {
    for (int i = 0; i < size; i++) {
        int reversedNumber = 0;
        int originalNumber = numbers[i];

        // Reverse the digits
        while (originalNumber > 0) {
            int digit = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + digit;
            originalNumber /= 10;
        }

        // Update the array with reversed number
        numbers[i] = reversedNumber;
    }
}

// Function to reverse the order of numbers in the array
void reverseArray(int *numbers, int size) {
    for (int i = 0; i < size / 2; i++) {
        // Swap numbers at positions i and size - i - 1
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }
}


int main() {
    int size;

    // Input: Get the size of the array from the user
    scanf("%d", &size);

    // Check if the size is valid
    if (size <= 0 || size > 50) {
        printf("Invalid size. Please enter a size between 1 and 50\n");
        return 1;
    }

    // Declare an array to represent the encoded numbers
    int encodedNumbers[size];

    // Input: Get the elements of the array from the user
    for (int i = 0; i < size; i++) {
        scanf("%d", &encodedNumbers[i]);
    }

    // Call the reverseDigits function to decode the digits
    reverseDigits(encodedNumbers, size);

    // Call the reverseArray function to reverse the order of numbers
    reverseArray(encodedNumbers, size);

    // Display the decoded array
    for (int i = 0; i < size; i++) {
        printf("%d ", encodedNumbers[i]);
    }
    printf("\n");

    return 0;
}

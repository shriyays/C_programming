#include <stdio.h>
#include <string.h>

int patternMatching(char text, char pattern[]) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    if (patternLength > textLength) {
        // Pattern cannot be longer than the text
        return 0;
    }

    int count = 0;

    // Iterate through the text
    for (int i = 0; i <= textLength - patternLength; i++) {
        // Check if the substring matches the pattern
        if (strncmp(text + i, pattern, patternLength) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    char text[100], pattern[20];

    // Input: Get the text and pattern from the user
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // Remove the newline character

    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';  // Remove the newline character

    // Calculate and display the number of occurrences of the pattern in the text
    int result = patternMatching(text, pattern);
    printf("Number of occurrences: %d\n", result);

    return 0;
}

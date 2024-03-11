#include <stdio.h>

// Function to convert characters to uppercase
char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    return ch;
}

// Function to encrypt the message using Caesar cipher
void encrypt(char message[], int key) {
    int i;
    for (i = 0; message[i] != '\0'; ++i) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] + key - 'A') % 26 + 'A';
        }
    }
}

// Function to decrypt the message using Caesar cipher
void decrypt(char message[], int key) {
    int i;
    for (i = 0; message[i] != '\0'; ++i) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - key + 'A' + 26) % 26 + 'A';
        }
    }
}

int main() {
    int key;
    char plaintext[1000], ciphertext[1000];

    // Input the key
    scanf("%d", &key);

    // Input plaintext from Alex and encrypt it
    scanf(" %[^\n]s", plaintext);
    for (int i = 0; plaintext[i] != '\0'; ++i) {
        plaintext[i] = toUpperCase(plaintext[i]);
    }
    
   

    // Input encrypted text from Rosa and decrypt it
    scanf(" %[^\n]s", ciphertext);
    for (int i = 0; ciphertext[i] != '\0'; ++i) {
        ciphertext[i] = toUpperCase(ciphertext[i]);
    }

    // Check for invalid key
    if (key < 0 || key > 25) {
        printf("INVALID KEY !! CANNOT PERFORM ENCRYPTION !!\n");
    }
    else{
    encrypt(plaintext, key);
    printf("%s\n", plaintext);
    decrypt(ciphertext, key);
    printf("%s\n", ciphertext);
    }
    return 0;
}

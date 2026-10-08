#include <stdio.h>
int main() {
    char keys[10];
    int i, digits = 0, alphabets = 0;
    printf("Enter 10 characters (digits 0-9 or letters only):\n");
    for (i = 0; i < 10; i++) {
        printf("Key %d: ", i + 1);
        scanf(" %c", &keys[i]);
    }
    for (i = 0; i < 10; i++) {
    if (keys[i] >= 48 && keys[i] <= 57) digits++;
    else if ((keys[i] >= 65 && keys[i] <= 90) ||   
    (keys[i] >= 97 && keys[i] <= 122))  alphabets++;
    }
    printf("\nDigits: %d\nAlphabets: %d\n", digits, alphabets);
}
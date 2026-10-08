#include <stdio.h>
int main() {
    int num, i, isPrime;
    char choice;
    do {
        printf("Enter a token number: ");
        scanf("%d", &num);
        isPrime = 1;
        if (num <= 1)
            isPrime = 0;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
        printf("Check another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Program ended.\n");
    return 0;
}
#include <stdio.h>
int main(void) {
    int codes[20], i, key, found = 0;
    printf("Enter 20 product codes:\n");
    for (i = 0; i < 20; i++) {
    printf("Code %d: ", i + 1);
    scanf("%d", &codes[i]);}
    printf("\nEnter the product code to search: ");
    scanf("%d", &key);
    for (i = 0; i < 20; i++) {
    if (codes[i] == key) {
    printf("Product found at position %d in the list.\n", i + 1);
    found = 1;
    break; }
    }
    if (!found)
    printf("Out of Stock\n");
}
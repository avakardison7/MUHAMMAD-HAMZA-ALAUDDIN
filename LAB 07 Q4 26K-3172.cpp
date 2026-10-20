#include <stdio.h>
int main() {
    int age[6]   = {25, 30, 25, 22, 30, 28};
    int price[6] = {1200, 1500, 1100, 900, 1400, 1300};
    int n = 6;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (age[j] > age[j+1] ||
               (age[j] == age[j+1] && price[j] < price[j+1])) {
                int temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                temp = price[j];
                price[j] = price[j+1];
                price[j+1] = temp;
            }
        }
    }
    printf("Sorted by age ASC, price DESC:\n");
    for (int i = 0; i < n; i++)
        printf("Age %d  Price %d\n", age[i], price[i]);
    int pOnly[6];
    for (int i = 0; i < n; i++) pOnly[i] = price[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pOnly[j] < pOnly[j+1]) {
                int t = pOnly[j];
                pOnly[j] = pOnly[j+1];
                pOnly[j+1] = t;
            }
        }
    }
    printf("\nPrices only (descending):\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", pOnly[i]);
    return 0;
}
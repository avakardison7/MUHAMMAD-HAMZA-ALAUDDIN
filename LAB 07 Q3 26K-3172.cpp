#include <stdio.h>
int main() {
    int arr[] = {1, 8, 10, 12, 7, 4, 3};
    int n = 7;
    int t = 11;
    printf("Pairs that sum to %d:\n", t);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}
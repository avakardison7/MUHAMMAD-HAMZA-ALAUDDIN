#include <stdio.h>
void rotateLeft(int arr[], int n, int k) {
    int temp[100];
    int i;
    k = k % n;   // handle large k
    for(i = 0; i < n - k; i++) {
        temp[i] = arr[k + i];
    }
    for(i = 0; i < k; i++) {
        temp[n - k + i] = arr[i];
    }
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    } }
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 3;
    int i;
    printf("Before: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    rotateLeft(arr, n, k);
    printf("After:  ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
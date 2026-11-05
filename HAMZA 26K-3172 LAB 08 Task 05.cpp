#include <stdio.h>
void findDuplicateMissing(int arr[], int n) {
    int seen[100] = {0};   // assuming n < 100
    int i, duplicate = -1, missing = -1;
    for(i = 0; i < n; i++) {
        if(seen[arr[i]] == 1) {
            duplicate = arr[i];
        }
        seen[arr[i]] = 1; }
    for(i = 1; i <= n; i++) {
        if(seen[i] == 0) {
            missing = i;
            break;
        } }
    printf("Duplicate: %d\n", duplicate);
    printf("Missing: %d\n", missing);
}
int main() {
    int arr[] = {1, 2, 2, 4, 5};
    int n = 5;
    findDuplicateMissing(arr, n);
    return 0;
}
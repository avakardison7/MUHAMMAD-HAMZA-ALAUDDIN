#include <stdio.h>
#include <string.h>
void sortItems(char s[]) {
    int n = strlen(s);
    int arr[100];
    int i;
    for(i = 0; i < n; i++) {
        arr[i] = s[i] - '0';}
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while(mid <= high) {
        if(arr[mid] == 0) {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }}
    printf("Sorted: ");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);}
    printf("\n");
}
int main() {
    char input[] = "201201";
    printf("Before: %s\n", input);
    sortItems(input);
    return 0;
}
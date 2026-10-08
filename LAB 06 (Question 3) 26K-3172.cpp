#include <stdio.h>
int main() {
    int seats[30], i, empty = 0;
    printf("Enter status of 30 seats (1 = occupied, 0 = empty):\n");
    for (i = 0; i < 30; i++) {
    printf("Seat %d: ", i + 1);
    scanf("%d", &seats[i]); }
    for (i = 0; i < 30; i++) {
    if (seats[i] == 0)
    empty++;}
    printf("\nTotal empty seats available for booking: %d\n", empty);
    return 0;
}
#include <stdio.h>
void dispense(int amount) {
    if(amount <= 0 || amount % 100 != 0) {
        printf("invalid amount\n");
        return;
    }
    int notes[] = {5000, 1000, 500, 100};
    int count[4] = {0};
    int i;
    for(i = 0; i < 4; i++) {
        count[i] = amount / notes[i];
        amount = amount % notes[i];
    }
    printf("5000 x %d, 1000 x %d, 500 x %d, 100 x %d\n",
           count[0], count[1], count[2], count[3]);
}
int main() {
    int amount = 15700;
    dispense(amount);
    return 0;
}
#include <stdio.h>
int main() {
    float temp[7], sum = 0, avg;
    int i, hotDays = 0;
    printf("Enter the temperature (in Celsius) for 7 days:\n");
    for (i = 0; i < 7; i++) {
    printf("Day %d: ", i + 1);
    scanf("%f", &temp[i]);
    sum += temp[i];
    }
    avg = sum / 7;
    printf("\nAverage temperature of the week: %.2f C\n", avg);
    printf("Days with temperature above 38.0 C: ");
    for (i = 0; i < 7; i++) {
    if (temp[i] > 38.0) {
    printf("Day %d (%.1f C)  ", i + 1, temp[i]);
    hotDays++; }
    }
    if (hotDays == 0)
    printf("None");
    else
    printf("\n\nHeat warning should be issued for %d day(s).", hotDays);
    printf("\n");
    return 0;
}
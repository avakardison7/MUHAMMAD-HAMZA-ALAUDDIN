#include <stdio.h>
int main(void) {
    float rain[6], required = 100.0, totalDeficit = 0;
    int i;
    printf("Enter rainfall (mm) for 6 months:\n");
    for (i = 0; i < 6; i++) {
        printf("Month %d: ", i + 1);
        scanf("%f", &rain[i]);
    }
    printf("\n--- Rainfall Report (required: %.1f mm/month) ---\n", required);
    for (i = 0; i < 6; i++) {
    if (rain[i] >= required) {
    printf("Month %d: %.1f mm -> Surplus\n", i + 1, rain[i]);
    } else {
    printf("Month %d: %.1f mm -> Deficit\n", i + 1, rain[i]);
    totalDeficit += required - rain[i];}
    }
    printf("\nTotal rainfall deficit over 6 months: %.1f mm\n", totalDeficit);
}
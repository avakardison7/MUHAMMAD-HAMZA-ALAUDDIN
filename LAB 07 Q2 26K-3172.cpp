#include <stdio.h>
#include <string.h>
int main() {
    char days[5][12] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int morning[5] = {1, 1, 0, 1, 1};
    int mPrice[5]  = {300, 320, 0, 380, 375};
    int evening[5] = {0, 1, 1, 0, 1};
    int ePrice[5]  = {0, 310, 280, 0, 400};
    int choice, dayChoice, pref;
    printf("1. Best overall (lowest price among available)\n");
    printf("2. Prefer morning only\n");
    printf("3. Prefer evening only\n");
    printf("4. Check a specific day\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        int bestDay = -1, bestSlot = -1, bestP = 9999;
        for (int i = 0; i < 5; i++) {
            if (morning[i] == 1 && mPrice[i] < bestP) {
                bestP = mPrice[i];
                bestDay = i;
                bestSlot = 0; 
            }
            if (evening[i] == 1 && ePrice[i] < bestP) {
                bestP = ePrice[i];
                bestDay = i;
                bestSlot = 1;   /
            }
        }
        if (bestDay != -1)
            printf("Best option: %s %s for %d\n",
                   days[bestDay], bestSlot ? "Evening" : "Morning", bestP);
        else
            printf("No flights available\n");
    }
    else if (choice == 2) {          
        int best = -1, minP = 9999;
        printf("Morning flights available on:\n");
        for (int i = 0; i < 5; i++) {
            if (morning[i] == 1) {
                printf("  %s - %d\n", days[i], mPrice[i]);
                if (mPrice[i] < minP) {
                    minP = mPrice[i];
                    best = i;
                }
            }
        }
        if (best != -1)
            printf("Suggested: %s morning for %d\n", days[best], minP);
        else
            printf("No morning flights\n");
    }
    else if (choice == 3) {          
        int best = -1, minP = 9999;
        printf("Evening flights available on:\n");
        for (int i = 0; i < 5; i++) {
            if (evening[i] == 1) {
                printf("  %s - %d\n", days[i], ePrice[i]);
                if (ePrice[i] < minP) {
                    minP = ePrice[i];
                    best = i;
                }
            }
        }
        if (best != -1)
            printf("Suggested: %s evening for %d\n", days[best], minP);
        else
            printf("No evening flights\n");}
    else if (choice == 4) {
        printf("Enter day number (0=Mon ... 4=Fri): ");
        scanf("%d", &dayChoice);
        if (dayChoice < 0 || dayChoice > 4) {
            printf("Invalid day\n");
            return 0;}
        printf("%s:\n", days[dayChoice]);
        if (morning[dayChoice])
            printf("  Morning available - price %d\n", mPrice[dayChoice]);
        else
            printf("  Morning full\n");
        if (evening[dayChoice])
            printf("  Evening available - price %d\n", ePrice[dayChoice]);
        else
            printf("  Evening full\n");}
    return 0;
}
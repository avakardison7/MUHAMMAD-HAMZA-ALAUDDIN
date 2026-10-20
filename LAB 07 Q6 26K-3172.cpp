#include <stdio.h>
int main() {
    char msg[5][41];
    int excl[5] = {0};
    int ques[5] = {0};
    int i, j, len, total, maxTotal = -1, maxIdx = 0;
    printf("Enter 5 emergency messages (max 40 chars each):\n");
    for (i = 0; i < 5; i++) {
        printf("Message %d: ", i + 1);
        scanf(" %40[^\n]", msg[i]);
    }
    for (i = 0; i < 5; i++) {
        len = 0;
        while (msg[i][len] != '\0') {
            len++;
        }
        for (j = 0; j < len; j++) {
            if (msg[i][j] == '!') {
                excl[i]++;
            }
            if (msg[i][j] == '?') {
                ques[i]++;
            }
        }
    }
    printf("\nResults:\n");
    for (i = 0; i < 5; i++) {
        total = excl[i] + ques[i];
        printf("Msg %d: \"%s\"  ! = %d   ? = %d   total = %d\n",
        i + 1, msg[i], excl[i], ques[i], total);
        if (total > maxTotal) {
            maxTotal = total;
            maxIdx = i;
        }
    }
    printf("\nMessage with most ! and ? combined is #%d\n", maxIdx + 1);
    return 0;
}
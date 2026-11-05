#include <stdio.h>
int checkBalanced(int mat[10][10], int n) {
    int rowSum[10], colSum[10];
    int mainDiag = 0, otherDiag = 0;
    int i, j;
    int common, balanced = 1;
    for(i = 0; i < n; i++) {
        rowSum[i] = 0;
        for(j = 0; j < n; j++) {
            rowSum[i] += mat[i][j];
        } }
    for(j = 0; j < n; j++) {
        colSum[j] = 0;
        for(i = 0; i < n; i++) {
            colSum[j] += mat[i][j];
        } }
    for(i = 0; i < n; i++) {
        mainDiag += mat[i][i];
        otherDiag += mat[i][n-1-i];
    }
    common = rowSum[0];
    for(i = 0; i < n; i++) {
        if(rowSum[i] != common) balanced = 0; }
    for(i = 0; i < n; i++) {
        if(colSum[i] != common) balanced = 0; }
    if(mainDiag != common || otherDiag != common) balanced = 0;
    if(balanced) {
        printf("balanced, common sum = %d\n", common);
        return 1;
    } else {
        printf("Not balanced\n");
        printf("Row sums: ");
        for(i = 0; i < n; i++) printf("%d ", rowSum[i]);
        printf("\nColumn sums: ");
        for(i = 0; i < n; i++) printf("%d ", colSum[i]);
        printf("\nMain diagonal: %d\n", mainDiag);
        printf("Other diagonal: %d\n", otherDiag);
        return 0;
    }}
int main() {
    int mat[3][3] = {
        {2, 9, 6},
        {9, 3, 5},
        {4, 2, 6}  };
    checkBalanced(mat[i][j], 3);
    return 0;
}
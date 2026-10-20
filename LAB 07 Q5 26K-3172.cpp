#include <stdio.h>
int main() {
    char maze[5][5] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'} };
    int pathR[25], pathC[25];
    int len = 0;
    int r = 0, c = 0;
    pathR[len] = 0;
    pathC[len] = 0;
    len++;
    while (maze[r][c] != 'E') {
        if (c + 1 < 5 && (maze[r][c+1] == 'O' || maze[r][c+1] == 'E')
            && !(r == 1 && c == 2)) {          
            c++; }
        else if (r + 1 < 5 && (maze[r+1][c] == 'O' || maze[r+1][c] == 'E')) {
            r++; }
        else {
            printf("No path found\n");
            return 0;
        }
        pathR[len] = r;
        pathC[len] = c;
        len++;
    }
    printf("Path indicates:\n");
    for (int i = 0; i < len; i++) {
        printf("%d,%d", pathR[i], pathC[i]);
        if (i < len - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
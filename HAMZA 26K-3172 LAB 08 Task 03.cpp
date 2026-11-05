#include <stdio.h>
#include <stdlib.h>
struct Event {
    int time;
    char type;  }; // 's' for start, 'e' for end 
int compare(const void *a, const void *b) {
    struct Event *e1 = (struct Event *)a;
    struct Event *e2 = (struct Event *)b;
    if(e1->time != e2->time)
        return e1->time - e2->time;
    if(e1->type == 'e') return -1;
    return 1;
}
int minRooms(int start[], int end[], int n) {
    struct Event events[200];
    int i, rooms = 0, maxRooms = 0;
    for(i = 0; i < n; i++) {
        events[i].time = start[i];
        events[i].type = 's';
        events[n + i].time = end[i];
        events[n + i].type = 'e';
    }
    qsort(events, 2*n, sizeof(struct Event), compare);
    for(i = 0; i < 2*n; i++) {
        if(events[i].type == 's') {
            rooms++;
            if(rooms > maxRooms) maxRooms = rooms;
        } else {
            rooms--;
        } }
    return maxRooms;
}
int main() {
    int start[] = {100, 200, 400};
    int end[]   = {200, 300, 600};
    int n = 3;
    printf("Minimum rooms needed = %d\n", minRooms(start, end, n));
    return 0;
 }
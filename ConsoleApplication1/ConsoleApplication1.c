#include <stdio.h>

enum origin { EAST, WEST, SOUTH, NORTH };

void move(enum origin to) {
    printf("%d쪽으로 이동합니다.\n", to);
}

void moveChar(enum origin to) {
    char* moveTo[4] = {"EAST","WEST","SOUTH","NORTH"};
    printf("%s쪽으로 이동합니다.\n", moveTo[to]);
}

int main()
{
    
    enum origin mark = WEST;
    enum origin head = SOUTH;
    move(EAST);
    move(mark);
    move(head);
    move(NORTH);

    moveChar(EAST);
    return 0;
}

#include <stdio.h>

enum origin { EAST, WEST, SOUTH, NORTH };

void move(enum origin to) {
    printf("%d������ �̵��մϴ�.\n", to);
}

void moveChar(enum origin to) {
    char* moveTo[4] = { "EAST","WEST","SOUTH","NORTH" };
    printf("%s������ �̵��մϴ�.\n", moveTo[to]);
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

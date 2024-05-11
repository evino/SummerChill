#include <stdio.h>
#include "queue.h"

// File that contain main function
// and driver code.

int main() {
    printf("In main\n");

    int data = 5;
    printf("NODE MADE: %d\n", data);

    node_t *testNode = NewNode(data);
    printf("%p\n", testNode);
    DeleteNode(&testNode);
    printf("%p\n", testNode);

    queue_t *q =NewQueue(0);
    // if (q == 0) {
    //     printf("Exit with error\n");

    //     return 1;
    // }

    return 0;
}

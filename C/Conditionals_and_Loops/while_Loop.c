#include <stdio.h>

int main() {
    int count = 1;

    while (count < 8) {
        printf("Count = %d\n", count);
        count++;
    }
    return 0;
}

/*
 * The "while" condition, will repeat its statemants until gives a false result.
 * If you forget to make it exit the loop, you will create a infinite loop.
 */ 
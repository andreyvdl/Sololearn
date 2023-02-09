#include <stdio.h>

int main() {
    int count = 1;

    do
    {
        printf("Count = %d\n", count);
        count++;
    } while (count < 8);
    return 0;
}

/*
 * The "do" can be used as the same as while but the difference is: "while" will check if the condition is true BEFORE executing.
 * "do..while" will execute FIRST, then check the condition, so it is garanted that it will execute at least one time, even if the condition is false.
 */

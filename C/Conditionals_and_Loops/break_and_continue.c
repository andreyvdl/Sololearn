#include <stdio.h>

int main() {
    int num = 5;
    int num2 = 5;

    while (num > 0) {
        num2--;
        if (num2 == 2)
            continue;
        printf("num2 = %d\n", num2);
        if (num == 1)
            break;
        printf("num = %d\n", num);
        num--;
    }
    return 0;
}

/*
 * The "break" will exit the loop condition, even if the condition of while is true.
 * The "continue" will skip the repetition, so in this case "num" won't become 3 when "num2" become 2.
 */
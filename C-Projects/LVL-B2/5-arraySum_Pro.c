#include <stdio.h>

int main() {
    int numbers[] = {1, 9, 2, 8, 3};
    int length = sizeof(numbers) / sizeof(int);
    int i, sum = 0;

    for (i = 0; i < length; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int numbers[] = {1, 9, 2, 8, 3};
    int length = sizeof(numbers) / sizeof(int);
    int max = numbers[0];
    int i, maxIndex = 0;

    for (i = 1; i < length; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
            maxIndex = i;
        }
    }

    printf("The largest number at index %d is %d", maxIndex, max);

    return 0;
}


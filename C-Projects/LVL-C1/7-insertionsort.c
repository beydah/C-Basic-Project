#include <stdio.h>

// Insertion Sort

int main() {
    int array[10] = {84, 37, 50, 9, 22, 66, 95, 12, 75, 41};
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, key;

    printf("\nUnsorted Arr: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Insertion Sort
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    printf("\nSorted Arr: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


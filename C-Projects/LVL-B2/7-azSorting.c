#include <stdio.h>

void bubbleSort(char array[], int size) {
    int i, j;
    char temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    char array[] = {'d', 'a', 'b', 'C', 'F'};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Array before sorting: ");
    for (i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }

    bubbleSort(array, size);

    printf("\nArray after sorting in ascending order: ");
    for (i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }

    return 0;
}


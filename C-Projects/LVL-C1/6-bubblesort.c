#include <stdio.h>

// Bubble Sort

int main()
{
    int array[] = {84, 37, 50, 9, 22, 66, 95, 12, 75, 41};
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, temp;

    printf("\nUnsorted Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Bubble Sort
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nSorted Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}


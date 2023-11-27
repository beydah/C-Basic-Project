#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int array[10] = {84, 37, 50, 9, 22, 66, 95, 12, 75, 41};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    printf("\nUnsorted Arr: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }

    // Quick Sort
    int low = 0;
    int high = size - 1;
    int stack[high - low + 1];

    int top = -1;

    stack[++top] = low;
    stack[++top] = high;

    while (top >= 0) 
	{
        high = stack[top--];
        low = stack[top--];

        int pivot = array[high];
        int i = low - 1;
		int j = low;
		
        for (; j <= high - 1; j++) 
		{
            if (array[j] <= pivot) 
			{
                i++;
                swap(&array[i], &array[j]);
            }
        }
        
        swap(&array[i + 1], &array[high]);

        if (i - 1 > low) 
		{
            stack[++top] = low;
            stack[++top] = i - 1;
        }

        if (i + 1 < high) 
		{
            stack[++top] = i + 1;
            stack[++top] = high;
        }
    }

    printf("\nSorted Arr: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


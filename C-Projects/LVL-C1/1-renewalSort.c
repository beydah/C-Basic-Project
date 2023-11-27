#include <stdio.h>

// Function prototype:
void reverseArray(int array[], int start, int end);

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int i;
    
    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    // Calling the function
    reverseArray(array, 0, size - 1);
    
    printf("Reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    return 0;
}

// Function to reverse the array within the specified range
int temp;
void reverseArray(int array[], int start, int end)
{    
    // If the start point is greater than or equal to the end point, exit
    if (start >= end)
    {
        return 0;
    }
    
    temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    
    // Recursively calling the function, narrowing down the range
    reverseArray(array, start + 1, end - 1);
}


#include <stdio.h>

int main()
{
	int array[10] = {84, 37, 50, 9, 22, 66, 95, 12, 75, 41};
    int size = sizeof(array) / sizeof(array[0]);
    int i, j, min, temp;

    printf("\nUnsorted Arr: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
	
	//Selection Sort
	for(i = 0; i < size; i++)
	{
		min = i;
		
		for(j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
	
	printf("\nSorted Arr: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
	
	return 0;
}

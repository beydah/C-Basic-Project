#include <stdio.h>

// Concatenate arrays without using strcat

int main()
{
    int sumarray[15];
    int array1[5] = {1, 0, 2, 9, 3};
    int array2[5] = {4, 8, 5, 7, 6};
    int i, j;
    
    for (i = 0; array1[i] != '\0'; i++)
    {
        sumarray[i] = array1[i];
    }
    
    i = 6;
    
    for (j = 0; array2[j] != '\0'; j++)
    {
        sumarray[i] = array2[j];
        i++;
    }
    
    for (i = 0; i < 15; i++)
    {
        printf("%d. %d\n", i + 1, sumarray[i]);
    }
    
    return 0;
}


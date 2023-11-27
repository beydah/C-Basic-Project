#include <stdio.h>

int main()
{
    char character;
    int i;
    
    printf("Enter a Character: ");
    scanf("%c", &character);
    
    for (i = 32; i < 127; i++)
    {
        if (i == character)
        {
            printf("Character '%c' corresponds to ASCII Number: %d", character, i);
            break;
        }
    }
        
    return 0;
}


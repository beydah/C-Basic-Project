#include <stdio.h>

int main()
{
    char character;
    int choice;
    
    do
    {
        printf(" 1-ASCII\n 2-Alphabet\n 3-Digits\n Select Table: ");
        scanf("%d", &choice);
        
        if (choice < 1 || choice > 3)
        {
            printf("Invalid choice.\n");
        }
        
        printf("\n");
    }
    while (choice < 1 || choice > 3);
    
    if (choice == 1)
    {
        for (character = 32; character < 127; character++)
        {
            printf("ASCII: %d\tCharacter: %c\n", character, character);
        }
    }
    
    else if (choice == 2)
    {
        for (character = 65; character < 91; character++)
        {
            printf("ASCII: %d\tCharacter: %c\n", character, character);
        }
    }
    
    else
    {
        for (character = 48; character < 58; character++)
        {
            printf("ASCII: %d\tCharacter: %c\n", character, character);
        }
    }
    
    return 0;
}


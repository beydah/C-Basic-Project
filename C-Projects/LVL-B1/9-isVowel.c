#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char vowels[8] = {'A', 'E', 'I', 'O','U'};
    char text[100];
    int i, j, vowelCount = 0, consonantCount = 0;

    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            consonantCount++;

            if (islower(text[i]))
            {
                text[i] = toupper(text[i]);
            }

            for (j = 0; j < 8; j++)
            {
                if (text[i] == vowels[j])
                {
                    vowelCount++;
                    consonantCount--;
                    break;
                }
            }
        }
    }
	
    printf("Vowel Count: %d\nConsonant Count: %d\n", vowelCount, consonantCount);
	
    return 0;
}


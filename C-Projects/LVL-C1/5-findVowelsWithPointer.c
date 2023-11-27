#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100
// Using Pointers to Identify Vowels and Consonants in a String

void findVowels(char *p);

int main()
{
    char input[MAX_SIZE];

    printf("Enter a Text: ");
    fgets(input, sizeof(input), stdin);

    int length = strlen(input) - 1;

    printf("Text is: %sChar Number is: %d\n", input, length);

    int i = 0, j = 0;
    char text[length];
    for (; i < length; i++)
    {
        if (isalpha(input[i]))
        {
            if (islower(input[i])) {input[i] = toupper(input[i]);}

            text[j] = input[i];
            j++;
        }
    }

    text[j] = '\0';
    findVowels(&text[0]);

    return 0;
}

void findVowels(char *p)
{
    if (*p == '\0') {return;}

    char* vowels = "AEIOU";

    if (strchr(vowels, toupper(*p))) 
	{
        printf("%c is a Vowel.\n", *p);
    }

    findVowels(p + 1);
}

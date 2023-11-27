#include <stdio.h>

// Level 3: Hexadecimal to Binary

int main()
{
    int i = 0, j = 0;
    char hexadecimal[100];
    char reverse[100];
    char extraNum[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    printf("Enter Hexadecimal: ");
    scanf("%s", hexadecimal);

    while (hexadecimal[i + 1] != '\0')
    {
        i++;
    }

    for (; i >= 0; i--)
    {
        reverse[j] = hexadecimal[i];
        j++;
    }
    
    reverse[j] = '\0';
    j = 0;
	
	printf("Binary is: ");
	
    for (i = 0; reverse[i] != '\0'; i++)
    {
        if (reverse[i] >= 'A' && reverse[i] <= 'F')
        {
            switch (reverse[i])
            {
                case 'A':
                    printf("1010 ");
                    break;
                case 'B':
                    printf("1011 ");
                    break;
                case 'C':
                    printf("1100 ");
                    break;
                case 'D':
                    printf("1101 ");
                    break;
                case 'E':
                    printf("1110 ");
                    break;
                case 'F':
                    printf("1111 ");
                    break;
            }
        }
        
        else
        {
            int num = reverse[i] - '0';
            int bin[4];
			int k;
            for (k = 3; k >= 0; k--)
            {
                bin[k] = num % 2;
                num /= 2;
            }

            for (k = 0; k < 4; k++)
            {
                printf("%d", bin[k]);
            }
            printf(" ");
        }
    }

    return 0;
}

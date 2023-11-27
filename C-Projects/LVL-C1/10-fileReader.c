#include <stdio.h>

//File Reader

int main()
{
	char text;
	char fileName[20] = "10-filetext.txt";
	FILE* fileP;
	
	printf("\n'%s' is\n",fileName);
	
	fileP = fopen(fileName, "r");
	
	if(fileP == NULL)
	{
		printf("\nError: File Not Found\n");
	}
	
	else
	{
		text = fgetc(fileP);
		while(text != EOF)
		{
			printf("%c",text);
			text = fgetc(fileP);
		}
		
		fclose(fileP);
	}
	
	printf("\nProgram End\n");
	
	return 0;
}

#include <stdio.h>
#include <strings.h>
#include <ctype.h>

char getUserInput(char input[]);
char toUpperCase(char input[], size_t length);
char toLowerCase(char input[], size_t length);
void printArray(char userArray[]);

#define STRING_LENGTH 200
int main()
{
	int parts = 2;
	char userInput[STRING_LENGTH] = {0};
	char ArrayToUpper[STRING_LENGTH] = {0};
	char ArrayToLower[STRING_LENGTH] = {0};

	printf("Type in a string\n");
	getUserInput(userInput);
	//Fjerner new line
	userInput[strlen(userInput)-1] = 0;
	size_t length = strlen(userInput);

	// lengde av array og deler på part variabelen..
	// Kopierer characters fra userInput til ArrayToUpper. bruk memcpy for å kopiere minne plassen
	strcpy(ArrayToUpper, userInput);
	strcpy(ArrayToLower, userInput);
	toUpperCase(ArrayToUpper, length);
	toLowerCase(ArrayToLower, length);

	size_t partSize = length / parts;

	char part1[STRING_LENGTH] = {0};
	char part2[STRING_LENGTH] = {0};

	for (int i = 0; i < partSize; ++i)
	{
		part1[i] = userInput[i];
	}
	for (int j = partSize; j < length ; ++j)
	{
		part2[j-partSize] = userInput[j];
	}


	printf("The string split in two is '%s - %s'", part1, part2);



	return 0;
}

char getUserInput(char input[])
{
	fgets(input, STRING_LENGTH, stdin);
}

char toUpperCase(char input[], size_t length)
{
	char temp[STRING_LENGTH] = {0};
	printf("The string in uppercase is ");

	for (int i = 0; i < length ; ++i)
	{
		temp[i] = toupper(input[i]);
	}
	printf("%s", temp);
	printf("\n");
}

char toLowerCase(char input[], size_t length)
{
	char temp[STRING_LENGTH] = {0};
	printf("The string in lowercase is ");
	for (int i = 0; i < length; ++i)
	{
		temp[i] = tolower(input[i]);
	}
	printf("%s", temp);
	printf("\n");
}

void printArray(char userArray[])
{
	for (int i = 0; i < STRING_LENGTH; ++i)
	{
		printf("The part 1 array is '%c'\n", userArray[i]);
	}

}

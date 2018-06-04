#include <stdio.h>
#include <strings.h>

char getUserInput(char userArray[]);
char printLength(char input[], size_t l);
int compare(char normal[], char reverse[]);
size_t reverseArray(char userArray[], char Array[], size_t length);
void printreverseArray(char userArray[]);

#define STRING_LENGTH 200
int main ()
{
	char Array[STRING_LENGTH] = {0};
	char userArray[STRING_LENGTH] = {0};

	// Calling  get user input function, to receive input with fgets
	getUserInput(Array);

	//Fjerner new line
	Array[strlen(Array)-1] = 0;
	size_t length = strlen(Array);
	printLength(Array, length);

	// Sjekker lengden av arrayen uten new line

	// Kopierer characters fra Array til userArray. bruk memcpy for å kopiere minne plassen
	strcpy(userArray, Array);

	//Calling the reverse function to reverse the array.
	reverseArray(userArray, Array, length);

	// compare the two arrays against each other.
	compare(Array, userArray);

	// Print the reversed array
	printreverseArray(userArray);
	return 0;
}


char getUserInput(char input[])
{
	fgets(input, STRING_LENGTH, stdin);
}

char printLength(char input[], size_t l)
{
	printf("The word contains %zu letters\n", l);
}

int compare(char normal[], char reverse[])
{

	if (strcmp(normal, reverse) == 0)
	{
		printf("The word is a palindrome\n");
	}
	else
	{
		printf("The word is not a palindrome\n");
	}
}

size_t reverseArray(char userArray[], char Array[], size_t length)
{
	// Reverse the array
	for (size_t j = length; j > 0 ; --j)
	{
		userArray[j-1] = Array[length - j];
	}

}

void printreverseArray(char userArray[])
{
	printf("The word reversed is '%s'\n", userArray);
}


#include <stdio.h>
#include <strings.h>


void bAreSame();
void cAreSame();

#define STRING_LENGTH 200

int main() {

	char aArray[STRING_LENGTH] = {0};
	char bArray[STRING_LENGTH] = {0};
	char cArray[STRING_LENGTH] = {0};
	char userArray[STRING_LENGTH] = {0};

	fgets(userArray, STRING_LENGTH, stdin);

	userArray[strlen(userArray)-1] = 0;
	size_t userArrayLength = strlen(userArray);

	int counta = 0;
	int countb = 0;
	int countc = 0;

	for (int i = 0; i < userArrayLength; ++i)
	{
		if (userArray[i] == 'a')
		{
			counta ++;

		}
		if (userArray[i] == 'b')
		{
			countb ++;

		}
		if (userArray[i] == 'c')
		{
			countc ++;

		}
		else
		{
			continue;
		}

	}


	printf("'a' : %i'\n",counta);
	printf("'b' : %i'\n",countb);
	printf("'c' : %i'\n",countc);

printf("%s", aArray);
	return 0;
}

void bAreSame()
{
	printf("b are printed\n");
}

void cAreSame()

{
	printf("c are printed\n");
}
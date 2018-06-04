#include <stdio.h>


int takeUserInput(int userInput[], int l);

int main()
{
    int l  = 10;
    int userInput[] = {0};
    takeUserInput(userInput, l);
    printArray(userInput, l);

    return 0;
}

int takeUserInput(int userInput[], int l)
{
    for (int i = 0; i <l ; ++i)
    {
        scanf("%i", &userInput[i]);
    }
}

int printArray(int userInput[], int l)
{
    for (int j = 0; j < l; ++j)
    {
        printf("%i \n", userInput[j]);
    }
}
#include <stdio.h>
#include "dynamicMem.h"
#include <stdlib.h>

void userAllocate()
{
    int numOfInt;
    printf("How many integers will you type in\n");
    scanf("%i", &numOfInt);
    if (numOfInt <= 0)
    {
        printf("No numbers were given");
    }
    else
    {
        int* pNum = malloc(numOfInt * sizeof(int));
        readIntegers(pNum, numOfInt);
        free(pNum);

    }

}

void readIntegers(int* userPointer, int length)
{
    printf("Type in your numbers\n");
    for (int i = 0; i < length; ++i)
    {
        scanf("%i", &userPointer[i]);
    }
    printtoUser(userPointer, length);
}
void printtoUser(int* userPointer, int length) {
    printf("Count: %i\n", length);
    printf("Numbers: ");
    for (int i = 0; i < length; ++i)
    {
        printf("%i ", userPointer[i]);
    }


}


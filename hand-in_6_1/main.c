#include <stdio.h>
#include <stdlib.h>
#include "dynamicMem.h"

void userAllocate();
void readIntegers(int* userPointer, int length);
void printtoUser(int* userPointer, int length);

int main()
{
    userAllocate();
    return 0;
}

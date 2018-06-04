#include <stdio.h>
#include <stdbool.h>


int main()
{
    int sum;
    int count = 0;
    int num = 0;
    bool numCheck = true;
    printf("Type in a number: ");
    while(numCheck)
    {
        count ++;

        scanf("%d", &num);
        if (num == 0)
        {
            printf("You typed in the correct number\n");
            numCheck = false;
        }
        else
        {
            printf("Try again");
            numCheck = true;
        }

    }

    printf("Count: %d", count);
}
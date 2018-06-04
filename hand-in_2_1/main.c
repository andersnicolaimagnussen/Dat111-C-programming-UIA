#include <stdio.h>
#include <stdbool.h>


int main() {

    float userInput = 0;
    int count = 0;
    float sum = 0;
    float avg = 0;

    // Informerer brukeren om å taste inn en int
    printf("Please type a number\n");

    // Ønsker å ta i mot brukerens verdi

    bool value = true;

    while (value)
    {


        scanf("%f", &userInput);
        if (userInput == 0)
        {
            printf("Count: %i\n",count);
            value = false;

        }
        else
        {
            printf("You typed the wrong number\n Please continue\n");
            value = true;
            count ++;
            sum = userInput + sum;
            avg = sum / count;

        }
    }
    printf("Sum: %g\n", sum);
    printf("Average: %g", avg);


    return 0;
}
#include <stdio.h>


int printUserValue(int userArray[]);
int gatherUserValue(int userArray[], int length);
int minValue(int numb[], int length);
int maxValue(int nums[], int length);
int sum(int nums[], int l);

int main()
{
    int l = 10;
    // Instantiating an array of 10 index,  and setting each value to 0.
    int userArray[10] = {0};

    // Calling each function
    gatherUserValue(userArray, l);

    printf("Minimum: %i\n", minValue(userArray, l));
    printf("Maximum: %i\n", maxValue(userArray, l));
    float Sum = sum(userArray, l);
    printf("Sum: %g\n", Sum);

    float avg = Sum / 11;
    printf("Average: %.2f", avg);

    return 0;
}

int gatherUserValue(int userArray[], int length)
{

    // For loop for gathering user value and store it in the array.
    for (int i = 0; i < length; ++i)
    {
        scanf("%i", &userArray[i]);
    }
}

int minValue(int numb[], int length)
{
    // Now the userArray has numbers stored in the array.
    int min = numb[0];

    for (int i = 1; i < length; ++i)
    {
        if (min > numb[i])
        {
            min = numb[i];
        }
    }
    return min;
}

int maxValue(int nums[], int length)
{
    int Max = nums[0];
    for (int i = 1; i < length ; ++i)
    {
        if (Max < nums[i])
        {
            Max = nums[i];
        }
    }
    return Max;
}

int sum(int nums[], int l)
{
    float temp;
    float sum;
    for (int i = 0; i < l; ++i)
    {
        temp = nums[i];
        sum = temp + sum;
    }
    return sum;

}
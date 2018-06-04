#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "student.h"


student_t* askStudentInfo(student_t * studentPtr)
{
    studentPtr  = malloc(sizeof(size_t));
    int check = 2;
    printf("Type in student info\n");
    int i = -1;
    int count = -1;
    while(check != 0)
    {
        i++;
        /*if(count %5 == 0 )
        {
            studentPtr = realloc(studentPtr, 10 * sizeof(student_t));
        }*/
        fgets(studentPtr[i].name, 200, stdin);
        studentPtr[i].name[strlen(studentPtr[i].name) - 1] = 0;
        check = strcmp(studentPtr[i].name, "stop");
        count++;
        if (check != 0)
        {
            scanf("%i\n", &studentPtr[i].Age);
        }

    }
    checkHL(studentPtr, count);
    return studentPtr;
}

void print(student_t* student, int count)
{
    printf("Count: %i\n", count);
    for (int i = 0; i < count; ++i)
    {
        printf("Name = %s, age = %i\n", student[i].name, student[i].Age);
    }
}
void checkHL(student_t* studentPtr, int count) {
    int min = 2147483647;
    int max = 0;
    char maxName[100];
    char minName[100];
    for (int i = 0; i < count; ++i) {
        if (studentPtr[i].Age < min) {
            min = studentPtr[i].Age;
            strcpy(minName, studentPtr[i].name);
        }

        if (studentPtr[i].Age > max) {
            max = studentPtr[i].Age;
            strcpy(maxName, studentPtr[i].name);
        }
    }
    print(studentPtr, count);
    printf("Youngest: %s\n", minName);
    printf("Oldest: %s\n", maxName);
}
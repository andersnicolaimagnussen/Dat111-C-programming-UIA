#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "student.h"

int main()
{
    student_t student;
    student_t* studPtr = &student;
    student_t* result;
    result = askStudentInfo(studPtr);
    free(result);
}

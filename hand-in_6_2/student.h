//
// Created by andersnicolai on 12/2/17.
//

typedef struct Student
{
    char name[100];
    int Age;
} student_t;

student_t* askStudentInfo(student_t * studentPtr);
void checkHL(student_t* studentPtr, int count);
void print(student_t* student, int count);

#ifndef HAND_IN_6_2_STUDENT_H
#define HAND_IN_6_2_STUDENT_H



#endif //HAND_IN_6_2_STUDENT_H

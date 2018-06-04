#ifndef HAND_IN_5_3_STUDENT_H
#define HAND_IN_5_3_STUDENT_H

typedef struct Student
{
	char name[100];
	int ID;
	int Age;
} student_t;

void TakeUserInput(student_t* student, int maxcount);
void writeToFile(student_t* student);
void welcomeUser(student_t* student);
void printToUser(student_t* student);
void readFromFile(student_t* student, int maxcount);

#endif //HAND_IN_5_3_STUDENT_H

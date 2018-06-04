#include <stdio.h>
#include <strings.h>

#define MAX_COUNT 100

typedef struct Student
{
	char name[100];
	int studentID;
	int Age;
} student_t;

void TakeUserInput(student_t* student);
void printToUser(student_t* student);

int main() {

	student_t student1;
	// ta i mot informasjon fra brukeren
	// scanf stopper på første mellomrom, derfor bruk fgets.
	TakeUserInput(&student1);
	printToUser(&student1);
	return 0;
}

void TakeUserInput(student_t* student)
{
	printf("type in your Student ID \n");
	scanf("%i", &student->studentID);
	getchar();

	printf("Type in your Name\n");
	fgets(student->name, MAX_COUNT, stdin);
	student->name[strlen(student->name) - 1] = 0;

	printf("Type in your Age\n");
	scanf("%i", &student->Age);
}

void printToUser(student_t* student)
{
	printf("Student id: %i\n",student->studentID);
	printf("Name: %s\n", student->name);
	printf("Age: %i\n", student->Age);
}
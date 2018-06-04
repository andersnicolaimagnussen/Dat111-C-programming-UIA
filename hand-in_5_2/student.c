#include <stdio.h>
#include "student.h"

void TakeUserInput(student_t* student, int maxcount)
{
	printf("type in your Student ID \n");
	scanf("%i", &student->ID);
	getchar();

	printf("Type in your Name\n");
	fgets(student->name, maxcount, stdin);
	student->name[strlen(student->name) - 1] = 0;

	printf("Type in your Age\n");
	scanf("%i", &student->Age);
}

void writeToFile(student_t* student)
{
	TakeUserInput(student, 100);
	FILE* f = fopen("student_write.txt", "w");
	fprintf(f, "%i\n", student->ID);
	fprintf(f, "%s\n", student->name);
	fprintf(f, "%i\n", student->Age);
	fclose(f);
}

void welcomeUser(student_t* student)
{
	int value;
	while (1)
	{
		printf("1: Read student information from file\n"
					   "2: Write student information to file\n"
					   "3: Exit\n");
		scanf("%i", &value);
      
		switch (value)
		{
			case 1 : readFromFile(student, 100);
				break;
			case 2 : writeToFile(student);
				break;
			case 3 : return;
		}
	}
}

void readFromFile(student_t* student, int maxcount)
{
	FILE* fr = fopen("student_read.txt", "r");
	//fgets(student->name, MAX_COUNT, fr);

	fscanf(fr, "%i", &student->ID);
	fgetc(fr);

	fgets(student->name, maxcount, fr);
	fscanf(fr, "%i", &student->Age);

	printf("Student id: %i\n", student->ID);
	printf("Name: %s", student->name);
	printf("Age: %i", student->Age);
	printf("\n");

	fclose(fr);
}






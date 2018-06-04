#include <stdio.h>

#include <memory.h>
#include "student.h"

int main()
{
	student_t student1 =  {0};
	// init student1 to 0
	memset(&student1.name[0], 0, sizeof(student1));
	welcomeUser(&student1);

	return 0;
}
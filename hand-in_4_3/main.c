#include <stdio.h>
#include <string.h>

void str_equal(char* s1, char* s2);
void substr(char* string, char* substr);

int main() {
	char first_string[255], second_string[255];

	printf("Enter a string:\n");
	fgets(first_string, sizeof(first_string), stdin);

	size_t ln_1 = strlen(first_string) - 1;
	first_string[ln_1] = '\0';

	printf("Enter another string:\n");
	fgets(second_string, sizeof(second_string), stdin);

	size_t ln_2 = strlen(second_string) - 1;
	second_string[ln_2] = '\0';

	str_equal(first_string, second_string);
	substr(first_string, second_string);

	return 0;
}

void str_equal(char* s1, char* s2){
	int equal = strcmp(s1, s2);

	if(!equal)
		printf("are equal\n");
	else
		printf("are not equal\n");
}

void substr(char* string, char* substr){
	char* substring = strstr(string, substr);
	char* substring_reverse = strstr(substr, string);

	if(substring || substring_reverse)
		printf("is a substring");
	else
		printf("is not a substring");
}
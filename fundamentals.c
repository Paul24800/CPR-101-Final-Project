#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 80

#define NUM_INPUT_SIZE 10

#include "fundamentals.h"


void fundamentals(void) {


	printf("*** Start of copying strings demo ***\n");

	char destination1[BUFFER_SIZE];

	char source[BUFFER_SIZE];

	do {

		destination1[0] = '\0';
		printf("Destination string is reset to empty \n");
		printf("type the source string (q - to quit):\n");

		fgets(source, BUFFER_SIZE, stdin);
		source[strlen(source) - 1] = '\0';

		if (strcmp(source, "q") != 0) {
			strcpy(destination1, source);
			printf("New destination string is \'%s\'\n", destination1);
		}
	} while (strcmp(source, "q") != 0);

	printf("*** End of copying strings demo ***\n\n");

}
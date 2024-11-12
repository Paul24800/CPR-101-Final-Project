#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

#include "converting.h"


void converting(void) {

    printf("*** Start of converting strings to long demo ***\n");

    char longString[BUFFER_SIZE];
    int longNumber;

    do {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0';
        if (strcmp(longString, "q") != 0) {
            longNumber = atoi(longString);
            printf("converted number is %d\n", longNumber);
        
        }

    } while (strcmp(longString, "q") != 0);

    printf("*** End of converting strings demo ***\n\n");
}
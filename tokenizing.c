#define _CRT_SECURE_NO_WARNINGS

#define BUFFER_SIZE 80

#include "tokenizing.h"

void tokenizing(void) {

    printf("*** Start of Tokenizing Strings Demo ***\n");

    char* nextSentence = NULL;
    int sentencesCounter;


    char sentences[BUFFER_SIZE];
    do {
        printf("Type a few sentences seperated by a dot (q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';

        if (strcmp(sentences, "q") != 0) {
            nextSentence = strtok(sentences, " ");
            sentencesCounter = 1;
            while (nextSentence) {
                printf("Word #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, " ");
            }

           
        }
    } while (strcmp(sentences, "q") != 0);

    printf("*** End of Token Indexing Strings Demo ***\n\n");
}


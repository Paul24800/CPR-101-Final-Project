#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void) {
	char buff[10];
	do {
		printf("Which module ro run?\n");
		printf("1 - Fundamentals\n");
		printf("2 - Manipulating\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Finish\n");
		printf("Your Selection: \n");
		fgets(buff, 10, stdin);
		switch (buff[0]) {
			case '1': fundamentals();
			break;
			case '2': manipulating();
			break;
			case '3': converting();
			break;
			case'4': tokenizing();
			break;
			case'0':
			break;
			default: printf("Bad selection!\n");
		}
	} while (buff[0] != '0');
	return 0;
}
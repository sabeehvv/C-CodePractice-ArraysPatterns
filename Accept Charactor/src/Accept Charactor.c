/*
 ============================================================================
 Name        : Accept.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	setbuf(stdout,NULL);
	printf("Enter a Character");
	scanf("%c",&character);
	printf("you have entered : %c",character);
	return EXIT_SUCCESS;
}

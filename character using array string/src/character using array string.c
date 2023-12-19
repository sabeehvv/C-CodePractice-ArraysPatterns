/*
 ============================================================================
 Name        : character.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout,NULL);
	printf("enter your name");
	gets(name);
	printf("entered name is\t: %s",name);
	return EXIT_SUCCESS;
}

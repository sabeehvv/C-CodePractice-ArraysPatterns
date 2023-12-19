/*
 ============================================================================
 Name        : exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("enter your mark : ");
	scanf("%f",&mark);
	if(mark>49){printf("Passed");}else{printf("Failed");}
	return EXIT_SUCCESS;
}

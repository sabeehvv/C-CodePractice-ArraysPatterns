/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for porotta\n2 for biriyani\n3 for fried rice\n4 for mandhi\nEnter your choice");
	scanf("%d",&choice);
	switch(choice){case 1:printf("you have selected porotta");break;
	case 2:printf("you have selected biriyani");break;
	case 3:printf("you have selected fried rice");break;
	case 4:printf("you have selected mandhi");break;
	default:printf("sharik nokki enter cheyyada!!!");}
	return EXIT_SUCCESS;
}


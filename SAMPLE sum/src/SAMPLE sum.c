/*
 ============================================================================
 Name        : SAMPLE.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	setbuf(stdout,NULL);
	printf("enter 2 numbers"); /* prints !!!Hello World!!! */
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("your result is :%d",sum);
	return EXIT_SUCCESS;
}

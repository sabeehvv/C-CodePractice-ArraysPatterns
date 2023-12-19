/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int result;
	setbuf(stdout,NULL);
	result=sum();
	printf("result is :%d",result);
	return EXIT_SUCCESS;
}

int sum(){
	int num1,num2,add;
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	return add;
}

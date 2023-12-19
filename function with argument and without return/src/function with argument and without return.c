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
void sum(int,int);
int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	return EXIT_SUCCESS;
}

void sum(int a,int b){
	int sum;
	sum=a+b;
	printf("result is :%d",sum);
}

/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,m;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&number);
	for(i=1;i<=10;i++){
		m=(i*number);{
		printf("%d*%d=%d\n",i,number,m);}
	}
	return EXIT_SUCCESS;
}

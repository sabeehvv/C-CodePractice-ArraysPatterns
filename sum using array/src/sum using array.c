/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,sum=0,value[100];
	setbuf(stdout,NULL);
	printf("enter your limit");
	scanf("%d",&limit);
	printf("enter a value");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+value[i];
	}
	printf("result is :%d",sum);
	return EXIT_SUCCESS;
}

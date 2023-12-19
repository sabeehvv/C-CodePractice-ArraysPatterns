/*
 ============================================================================
 Name        : patern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	//int limit;
	setbuf(stdout,NULL);
	//printf("enter your limit");
	//scanf("%d",&limit);
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);}
		printf("\n");}
	return EXIT_SUCCESS;
}

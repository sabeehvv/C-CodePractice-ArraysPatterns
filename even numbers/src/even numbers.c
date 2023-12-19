/*
 ============================================================================
 Name        : even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit;
	setbuf(stdout,NULL);
	printf("enter your limit");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++){if(i%2==0){
	printf("%d\n",i);}
	}
	return EXIT_SUCCESS;
}

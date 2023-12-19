/*
 ============================================================================
 Name        : Array.c
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
	int value[100];
	setbuf(stdout,NULL);
	printf("Enter array limit");
	scanf("%d",&limit);
	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	printf("The values store into the array are :");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}

	printf("\n\nThe values store into the array in reverse are :");
	for(i=(limit-1);i>=0;i--){
		printf("%d ",value[i]);
	}
	return EXIT_SUCCESS;
}

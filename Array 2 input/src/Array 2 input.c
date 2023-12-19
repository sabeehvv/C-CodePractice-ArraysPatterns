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
	int i,j,limit;
	int array1[100],array2[100];
	setbuf(stdout,NULL);
	printf("Enter arraay Limit");
	scanf("%d",&limit);
	printf("Enter array 1 values");
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter array 2 values");
	for(j=0;j<limit;j++){
		scanf("%d",&array2[j]);
	}
	printf("\nEntered values of array 1\n");

	for(i=0;i<limit;i++){
		printf("\n element %d\t:%d",i,array1[i]);
	}

	printf("\n\nEntered values of Array 2\n");
	for(j=0;j<limit;j++){
		printf("\n element %d\t:%d",j,array2[j]);
	}
	return EXIT_SUCCESS;
}

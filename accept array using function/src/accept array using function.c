/*
 ============================================================================
 Name        : accept.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void getArray(int size, int array1[]){
	int i;
	printf("enter the values of array");
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);
	}
}
void displayarray(int size,int array1[]){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",array1[i]);
	}
}

int main(void) {
	int size,array1[100];
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&size);
	getArray(size,array1);
	displayarray(size,array1);
	return EXIT_SUCCESS;
}

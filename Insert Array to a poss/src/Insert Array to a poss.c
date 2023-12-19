/*
 ============================================================================
 Name        : Insert.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,array[100],newvalue,position;
	setbuf(stdout,NULL);
	printf("Enter the size of Array");
	scanf("%d",&size);
	printf("Enter the values of array");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter a position to insert new element in array");
	scanf("%d",&position);
	size=size+1;
	printf("Enter a value to insert");
	scanf("%d",&newvalue);
	for(i=size;i>=position-1;i--){
		array[i]=array[i-1];
	}
	array[position-1]=newvalue;
	printf("array after insertion of new value :\n");
	for(i=0;i<size;i++){
		printf("%d  ",array[i]);
	}
	return EXIT_SUCCESS;
}

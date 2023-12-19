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
	int i,size,evennumbers=0;
	int value[100];
	setbuf(stdout,NULL);
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("enter value of array");
	for(i=0;i<size;i++){
		scanf("%d",&value[i]);
		}
	for(i=0;i<size;i++){
		if(value[i]%2==0){
			evennumbers++;}
	}
	printf("number of even numbers in the given array is\t:%d\t",evennumbers);
	return EXIT_SUCCESS;
}

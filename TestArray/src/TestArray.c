/*
 ============================================================================
 Name        : TestArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,smallest,Array[100];
	setbuf(stdout,NULL);
	printf("Enter the size of Array");
	scanf("%d",&size);
	printf("Enter the values of Array");
	for(i=0;i<size;i++){
		scanf("%d",&Array[i]);
	}
	smallest=Array[0];
	for(i=0;i<size;i++){
		if(smallest>Array[i]){
			smallest=Array[i];
		}
	}
	printf("Smallest number in the given Array is :%d",smallest);
	return EXIT_SUCCESS;
}

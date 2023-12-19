/*
 ============================================================================
 Name        : interchange.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,temp;
		int array1[100],array2[100];
		setbuf(stdout,NULL);
		printf("enter the size of array\n");
		scanf("%d",&size);
		printf("enter values of array1\n");
		for(i=0;i<size;i++){
			scanf("%d",&array1[i]);
		}
		printf("enter values of array2\n");
		for(i=0;i<size;i++){
			scanf("%d",&array2[i]);}

		for(i=0;i<size;i++){
			temp=array1[i];
			array1[i]=array2[i];
			array2[i]=temp;
		}

		printf("\n\nArray after swapping");

		printf("\narray1 :\t");
		for(i=0;i<size;i++){
		printf("%d ",array1[i]);}

		printf("\narray2 :\t");
		for(i=0;i<size;i++){
				printf("%d ",array2[i]);}
	return EXIT_SUCCESS;
}

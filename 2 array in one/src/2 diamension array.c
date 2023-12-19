/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size;
	int array1[100][100],array2[100][100],sumArray[100][100];
	setbuf(stdout,NULL);
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter the values of array1");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		scanf("%d",&array1[i][j]);
	}}
	printf("enter value of array2");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array2[i][j]);
		}
	}

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		sumArray[i][j]=array1[i][j]+array2[i][j];
	}
	}
	printf("Sum of 2 arrays is:\n");
	for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				printf("%d ",sumArray[i][j]);
			}printf("\n");}

	return 0;
}

/*
 ============================================================================
 Name        : 2dArrayFunction.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int getArray(int array1[10][10],int array2[10][10]);
void addArray(int array1[10][10],int array2[10][10],int sumArray[10][10],int size);
void displayArray(int sumArray[10][10],int size);

int main(void) {
	int array1[10][10],array2[10][10],sumArray[10][10],size;
	setbuf(stdout,NULL);
	size=getArray(array1,array2);
	addArray(array1,array2,sumArray,size);
	displayArray(sumArray,size);

	return EXIT_SUCCESS;
}

int getArray(int array1[10][10],int array2[10][10]){
	int i,j,size;
	printf("Enter the size of Array");
	scanf("%d",&size);
	printf("Enter the values of array 1\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array1[i][j]);
	}}
	printf("Enter the values of array 2\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array2[i][j]);
		}}
	return size;
}

void addArray(int array1[10][10],int array2[10][10],int sumArray[10][10],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		sumArray[i][j]=array1[i][j]+array2[i][j];
		}
	}
}

void displayArray(int sumArray[10][10],int size){
	int i,j;
	printf("Sum of Array 1 and Array 2 \n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",sumArray[i][j]);
		}printf("\n");
	}
}

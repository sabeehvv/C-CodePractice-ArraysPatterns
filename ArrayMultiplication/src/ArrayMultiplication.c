/*
 ============================================================================
 Name        : ArrayMultiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,array1[100],limit;
	int array2[100];
	setbuf(stdout,NULL);
	printf("Enter the Array Limit");
	scanf("%d",&limit);
	printf("Enter the values of array");
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
	}
	for(i=0;i<limit;i++){
		for(j=i+1;j<=i+1;j++){
		array2[i]=array1[i]*array1[j];
	}}
	for(i=0;i<limit-1;i++){
		printf("%d\t",array2[i]);
	}
	return EXIT_SUCCESS;
}

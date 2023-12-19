/*
 ============================================================================
 Name        : multi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,size,sum;
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&size);
	int array1[size][size],array2[size][size];
	printf("enter the values of array 1\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("element(%d-%d)=",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
	printf("enter the values of array 2\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("element(%d-%d)=",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	printf("sum of 2 arrays is:\n");
	for(i=0;i<size;i++){
		printf("\n");
		for(j=0;j<size;j++){
			sum=array1[i][j]+array2[i][j];
			printf("%d\t",sum);
		}
	}
	return EXIT_SUCCESS;
}

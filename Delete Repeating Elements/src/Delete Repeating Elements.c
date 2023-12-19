/*
 ============================================================================
 Name        : Delete.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,j,k,array[100];
	setbuf(stdout,NULL);
	printf("Enter the size of array");
	scanf("%d",&size);
	printf("Enter the values of array ");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(array[i]==array[j]){
				size--;
				for(k=j;k<size;k++){
					array[k]=array[k+1];
				}
			}
		}
	}
	printf("array after deletion of duplicate elements\n");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : ArrayPrimeNumberDelete.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,size,array[100],flag;
	setbuf(stdout,NULL);
	printf("Enter the size of array");
	scanf("%d",&size);
	printf("Enter the values of array");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("Prime Numbers :");
	for(i=0;i<size;i++){
		flag=0;if(array[i]==1||array[i]==0)flag=1;
		for(j=2;j<array[i];j++){
			if((array[i]%j)==0){
				flag=1;
				break;}}
			if(flag==0){
				printf("%d ",array[i]);
				size=size-2;
				for(k=i;k<size;k++){
					array[k+1]=array[k+3];
				}//i--;
			}
				}

	printf("\n\narray elements after deletion of prime numbers :");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	return EXIT_SUCCESS;
}

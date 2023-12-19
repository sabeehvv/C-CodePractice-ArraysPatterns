/*
 ============================================================================
 Name        : Duplicate.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,array1[100],array2[100];
	int limit,temp=1,count=0;
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&limit);
	printf("enter the values for");
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
		array2[i]=0;
	}
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			if(array1[i]==array1[j]){
				array2[j]=temp;
				temp++;
			}
		}temp=1;
	}
	for(i=0;i<limit;i++){
		if(array2[i]==2){
			count++;
		}
	}
	printf("Duplicate numbers : %d ",count);
	return EXIT_SUCCESS;
}

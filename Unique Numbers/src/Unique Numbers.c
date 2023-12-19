/*
 ============================================================================
 Name        : Unique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,array[100],unqcount=0;
	int i,j,k,sameNumbers=0,temp;
	setbuf(stdout,NULL);
	printf("identify unique numbers\n");
	printf("-----------------------");
	printf("\nenter the limit of array");
	scanf("%d",&limit);
	printf("\nenter the values of array");
	for(i=0;i<limit;i++){
		printf("\nelement %d : ",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}}


	printf("\n\nunique numbers :");
	for(i=0;i<limit;i++){
		sameNumbers=0;
		for(j=0;j<limit;j++){
			if(i!=j){
				if(array[i]==array[j]){
					sameNumbers++;
				}
			}
		}if(sameNumbers==0){
			printf("%d ",array[i]);
			unqcount++;
		}
	}
	printf("\nNo of Unique Elements : %d",unqcount);
	return EXIT_SUCCESS;
}

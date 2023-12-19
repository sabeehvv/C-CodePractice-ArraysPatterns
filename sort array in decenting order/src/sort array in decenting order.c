/*
 ============================================================================
 Name        : sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,temp;
	int value[100];
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&limit);
	printf("enter the values of array");
	for(i=0;i<limit;i++){
		scanf("%d",&value[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i;j<limit;j++){
			if(value[i]<value[j]){
				temp=value[i];
				value[i]=value[j];
				value[j]=temp;
			}
		}
	}
	printf("sorted values are\n");
	for(i=0;i<limit;i++){
		printf("%d ",value[i]);
	}
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : merge.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit1,limit2,limit3,array1[100],array2[100],array3[200];
	int temp;
	setbuf(stdout,NULL);
	printf("Input the number of elements to be stored in the first array");
	scanf("%d",&limit1);
	printf("Input %d elements in the array :",limit1);
	for(i=0;i<limit1;i++){
		printf("\nelement : %d",i);
		scanf("%d",&array1[i]);
	}
	printf("Input the number of elements to be stored in the second array :");
	scanf("%d",&limit2);
	printf("Input %d elements in the array :",limit2);
	for(j=0;j<limit2;j++){
		printf("element - %d: ",j);
		scanf("%d",&array2[j]);
	}

	limit3=limit1+limit2;
	printf("The merged array in decending order is :\n ");
	for(i=0;i<limit1;i++){
		array3[i]=array1[i];
	}
	for(j=0;j<limit2;j++){
		array3[i]=array2[j];
		i++;
	}
	for(i=0;i<limit3-1;i++){
		for(j=i+1;j<limit3;j++){

			if(array3[i]<array3[j]){
				temp=array3[i];
				array3[i]=array3[j];
				array3[j]=temp;
			}
		}
	}
	for(i=0;i<limit3;i++){
		printf("%d ",array3[i]);
	}
	return EXIT_SUCCESS;
}
